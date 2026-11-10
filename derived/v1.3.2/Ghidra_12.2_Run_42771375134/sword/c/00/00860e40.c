/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00860e40; name: FUN_00860e40
 */


void FUN_00860e40(undefined8 *param_1,string *param_2,string *param_3)

{
  string *this;
  
  this = (string *)*param_1;
  if (this != param_3) {
    if (this == param_2) {
      FUN_009b58d0(param_1,param_3);
      return;
    }
    std::string::operator=(this,param_3);
  }
  return;
}


