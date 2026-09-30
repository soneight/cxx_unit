// #include <son8/cxx/file.hxx>
// #include <son8/cxx/text.hxx>
// #include <son8/cxx/meta.hxx>
// #include <son8/cxx/flow.hxx>
// timings cpu perf
#include <son8/cxx.hxx> // 1.59s
#if 0
#include <son8/cxx/core.hxx> // 0.41s
#include <son8/cxx/flow.hxx> // 0.41s
#include <son8/cxx/meta.hxx> // 0.41s
#include <son8/cxx/atom.hxx> // 0.50s
#include <son8/cxx/data.hxx> // 0.52s
#include <son8/cxx/file.hxx> // 0.55s
#include <son8/cxx/text.hxx> // 0.56s
#include <son8/cxx/func.hxx> // 1.28s
#endif

namespace son8::cxx_dummy_face {
    namespace fs = cxx::filesystem;

    static auto read_file( fs::path path ) -> cxx::string {
        using namespace cxx::string_literals;
        using Char = cxx::ifstream::char_type;
        static_assert( cxx::is_same_v< cxx::string::value_type, Char >
            , "required input file string and string to have same character type" );
        static constexpr Char New_Line = '\n';
        cxx::ifstream inputFile{ path, cxx::ios::binary };

        if ( not inputFile ) { throw cxx::runtime_error{ "read_file: could not open file:"s + path.string( )}; }

        cxx::string contents;
        auto fileSize = file_size( path );
        contents.reserve( fileSize + 1 );
        contents.resize( fileSize );
        inputFile.read( contents.data( ), fileSize );

        if ( contents.back( ) != New_Line ) contents.push_back( New_Line );

        return contents;
    }

}
