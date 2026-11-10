/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103ca20; name: FUN_0103ca20
 */


void FUN_0103ca20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auStack_40 [16];
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x60);
  lVar1 = lVar3 + 0x170;
  uVar5 = FUN_012b4090(lVar1);
  if (((uVar5 & 1) == 0) || (iVar4 = FUN_0103c3b0(lVar3,uVar2), iVar4 == -1)) {
    FUN_012b4040(auStack_40);
  }
  else {
    FUN_012b4190(auStack_40,lVar1,(long)iVar4);
  }
  FUN_012b4070(param_1 + 0x68,auStack_40);
  FUN_012b4090(param_1 + 0x68);
  return;
}


