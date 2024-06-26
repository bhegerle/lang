#include "ident.h"

using namespace utils;
using namespace parser;

namespace ast {
ident::ident(token &&ident) {
    dynamic_assert(ident.type() == token_type::ident,
                   "invalid token type {} in ident", ident.type());
}
} // namespace ast