/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00652760; name: FUN_00652760
 */


undefined4 FUN_00652760(long param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_40 [16];
  
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    FUN_006966f0(auStack_40,param_1 + 0x20,1);
    puVar1 = *(undefined4 **)(param_1 + 0x18);
    puVar4 = *(undefined4 **)(puVar1 + 4);
    if ((puVar4 == puVar1) || (*(uint *)(param_1 + 0x5c) <= *(int *)(param_1 + 0x58) + 1U)) {
      uVar3 = 0xffffffff;
    }
    else {
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar4 + 4);
      *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(puVar4 + 4) = lVar2;
      *(undefined4 **)(lVar2 + 8) = puVar4;
      *(undefined4 **)(*(long *)(puVar4 + 2) + 0x10) = puVar4;
      (**(code **)PTR_DAT_02713ad0)(*(undefined8 *)(param_1 + 0x50),*puVar4,param_2);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      uVar3 = *puVar4;
    }
    FUN_00696730(auStack_40);
  }
  return uVar3;
}


