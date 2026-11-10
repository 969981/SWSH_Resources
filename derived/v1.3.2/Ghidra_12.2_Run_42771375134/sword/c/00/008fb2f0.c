/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb2f0; name: FUN_008fb2f0
 */


void FUN_008fb2f0(undefined8 *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_008783b0(*param_1);
  sVar1 = FUN_008783c0(*param_1);
  sVar2 = FUN_008787f0(*param_1);
  if (iVar3 == 0x379) {
    if ((sVar1 == 0) && (sVar2 == 0x450)) goto LAB_008fb378;
  }
  else if (iVar3 == 0x378) {
    if ((sVar1 == 0) && (sVar2 == 0x44f)) goto LAB_008fb378;
  }
  else if (iVar3 == 0x2cc) {
LAB_008fb378:
    FUN_0087df30(*param_1,1,0);
    return;
  }
  return;
}


