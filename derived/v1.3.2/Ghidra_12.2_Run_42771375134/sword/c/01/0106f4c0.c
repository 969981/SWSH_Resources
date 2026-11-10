/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106f4c0; name: FUN_0106f4c0
 */


undefined4 FUN_0106f4c0(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 5;
  if (param_2 != '\x01') {
    uVar3 = 0;
  }
  uVar2 = 3;
  if (param_2 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 3;
  if (param_2 != '\x01') {
    uVar3 = 0;
  }
  uVar1 = 2;
  if (param_2 != '\0') {
    uVar1 = uVar3;
  }
  uVar3 = 0;
  if (param_1 == 0) {
    uVar3 = uVar1;
  }
  if (param_1 != 1) {
    uVar2 = uVar3;
  }
  return uVar2;
}


