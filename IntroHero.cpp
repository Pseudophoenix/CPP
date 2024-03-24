class Hero{
    //properties or data members
    private:
    int point;
    public://access modifier
// Three types of access modifiers:
//  public
//  protected
//  private
// by default private is applied
    int height;
    int health;
    // char level='a';
    //function members
    void print()
    {
        // accessing the private member within class only   
        cout<<point<<endl;
    }
};