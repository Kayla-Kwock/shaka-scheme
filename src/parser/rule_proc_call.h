#ifndef SHAKA_PARSER_RULES_RULE_PROC_CALL_H
#define SHAKA_PARSER_RULES_RULE_PROC_CALL_H

#include <cctype>

#include "parser/primitives.h"
#include "parser/Token.h"
#include "parser/Tokenizer.h"

namespace shaka {
namespace parser {
namespace rule {

// BNF:
// <procedure call> := (<operator> <operand>*)
// <operator>       := <expression>
// <operand>        := <expression>
//
// <expression> := <variable> | quote<datum> | '<datum> |
//                 <procedure call> | lambda<formals> <body> |
//                 if <test> <consequent> <alternative> |
//                 if <test> <consequent> | set! <variable> <expression> |
//                 derived expressions
template <typename T>
bool proc_call(
    InputStream&    in,
    NodePtr         root,
    T&              interm
);

} // namespace rule
} // namespace parser
} // namespace shaka


#endif // SHAKA_PARSER_RULE_RULE_PROC_CALL_H
