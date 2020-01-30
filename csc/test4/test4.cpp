#include <covscript/dll.hpp>

cs::var hello(cs::vector &)
{
    return cs::var::make<cs::string>("world");
}

void cs_extension_main(cs::name_space *ns)
{
    ns->add_var("hello", cs::var::make_protect<cs::callable>(hello));
}