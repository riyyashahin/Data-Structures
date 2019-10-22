int main(){
slist s = slist_new();
	slist *list = &s;
	list = slist_add_tail(list, 1100,1,0);
	assert (slist_length(list) == 1);
	
	list = slist_add_tail(list, 1150,2,1);
	list = slist_add_tail(list, 1330,3,0);
	list = slist_add_tail(list, 1400,4,1);
	list = slist_add_tail(list, 1530,5,0);
	assert (slist_length(list) == 5);

	traverse(list);
	sec(list);
	

}
