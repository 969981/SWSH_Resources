/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103c610; name: FUN_0103c610
 */


bool FUN_0103c610(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  uVar3 = FUN_012b4090(param_1 + 0x170);
  if (((uVar3 & 1) == 0) || (iVar2 = FUN_0103c3b0(param_1,param_2), iVar2 == -1)) {
    FUN_012b4040(auStack_40);
    uVar3 = FUN_012b4090(auStack_40);
  }
  else {
    FUN_012b4190(auStack_40,param_1 + 0x170,(long)iVar2);
    uVar3 = FUN_012b4090(auStack_40);
  }
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    local_68 = 0xa95e4b98061c2e4e;
    local_60 = "appvisible";
    local_58 = 10;
    FUN_012b4250(auStack_50,auStack_40,&local_68);
    iVar2 = FUN_012b4420(auStack_50,0);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


