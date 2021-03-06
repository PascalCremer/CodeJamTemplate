//#region printerTools
/*  <<-operator for deque and pair class
 */
namespace printerTools{

template <typename T>
std::ostream& operator<<(std::ostream& os, std::deque<T> vector);

template <typename S, typename T>
std::ostream& operator<<(std::ostream& os, std::pair<S,T> pa);

template <typename T>
std::ostream& operator<<(std::ostream& os, std::deque<T> vector){
    if(vector.size()==0)
        return os;
    os << vector[0];
    for(unsigned long long i=1;i<vector.size();++i)
        os << ' ' << vector[i];
    return os;
}

template <typename S, typename T>
std::ostream& operator<<(std::ostream& os, std::pair<S,T> pa){
    os << pa.first << ' ' << pa.second;
    return os;
}

template<typename T>
void log(T t){
#ifndef SUBMIT
    std::cerr << t << std::endl;
#endif /*SUBMIT*/
    return;
}

template<typename T, typename... Args>
void log(T t, Args... args){
#ifndef SUBMIT
    std::cerr << t;
    log(args...);
#endif /*SUBMIT*/
    return;
}

} // namespace printerTools
using namespace printerTools;
//#endregion printerTools
