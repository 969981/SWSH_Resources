/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083dfa0; name: FUN_0083dfa0
 */


void FUN_0083dfa0(undefined8 *param_1,long param_2,string *param_3)

{
  string *this;
  
  this = operator_new(0x18);
  if (param_3 == (string *)0x0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)this = 0;
    *param_1 = this;
  }
  else {
    std::string::string(this,param_3);
    *param_1 = this;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_0081cc40(param_2,this);
  return;
}


