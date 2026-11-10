/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00651f80; name: FUN_00651f80
 */


undefined4 FUN_00651f80(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_50 [16];
  
  uVar4 = 0xffffffff;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_006966f0(auStack_50,param_1 + 0x20,1);
    puVar1 = *(undefined4 **)(param_1 + 0x18);
    puVar5 = *(undefined4 **)(puVar1 + 4);
    if ((puVar5 == puVar1) || (*(uint *)(param_1 + 0x5c) <= *(int *)(param_1 + 0x58) + 1U)) {
      uVar4 = 0xffffffff;
    }
    else {
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar5 + 4);
      *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(puVar5 + 4) = lVar2;
      *(undefined4 **)(lVar2 + 8) = puVar5;
      *(undefined4 **)(*(long *)(puVar5 + 2) + 0x10) = puVar5;
      if ((param_4 & 1) == 0) {
        puVar3 = (undefined8 *)PTR_DAT_02713ac8;
      }
      else {
        puVar3 = (undefined8 *)PTR_DAT_02714ac8;
      }
      (*(code *)*puVar3)(*(undefined8 *)(param_1 + 0x50),*puVar5,param_2,param_3);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      uVar4 = *puVar5;
    }
    FUN_00696730(auStack_50);
  }
  return uVar4;
}


