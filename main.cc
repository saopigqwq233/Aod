#include "utils.hpp"
#include "data.hpp"
#include"server.hpp"
using namespace aod;


int main(){
    Server server(8888);
    server.RunModule();

    return 0;
}
// int main()
// {
    // FileUtil fileutil("./www/text.txt");
    // // printf("%d",fileutil.Exists());
    // Json::Value value;
    // value["123"] = "你好";
    // value["hello"] = 123;
    // value["成"].append("世界");
    // value["成"].append("为");
    // value["成"].append("未来");
    // std::string str;
    // JsonUtils::Serialize(value,&str);
    // fileutil.SetContent(str);

    // value["name"] = "super hero";
    // value["info"] = "not bad";
    // value["video"] = "www/video/2.mp4";
    // value["image"] = "www/image/2.jpg";

    // TableVideo tablevideo;
    // // tablevideo.Insert(value);
    // tablevideo.SelectAll(&value);

    // std::string str;
    // JsonUtils::Serialize(value,&str);

    // std::cout<<str<<std::endl;

//     return 0;
// }
