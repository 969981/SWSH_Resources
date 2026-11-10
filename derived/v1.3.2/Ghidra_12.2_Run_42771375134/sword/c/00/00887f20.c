/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00887f20; name: FUN_00887f20
 */


int FUN_00887f20(undefined8 param_1,undefined2 param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined1 auStack_30 [16];
  
  FUN_008885c0(auStack_30,param_2);
  uVar2 = FUN_00888e00(auStack_30,1);
  if ((uVar2 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_00888d40(auStack_30);
    iVar3 = (uVar1 & 0xff) + 1;
  }
  FUN_00888620(auStack_30);
  return iVar3;
}


