/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00329c60; name: FUN_00329c60
 */


void FUN_00329c60(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  char *local_30;
  undefined1 local_28;
  uint7 uStack_27;
  
  lVar2 = *param_1;
  puVar3 = (uint *)(lVar2 + 0x10);
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar2 = *param_1;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_30 = "Links";
  local_28 = 0;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_27 << 8;
    *puVar1 = "Links";
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_30);
  }
  FUN_0032a630(param_1,param_2);
  puVar3 = (uint *)(*param_1 + 0x10);
  if (*puVar3 != 0) {
    uVar4 = *puVar3 - 1;
    if (*(char *)(*(long *)(*param_1 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      puVar3 = (uint *)(*param_1 + 0x10);
      uVar4 = *puVar3 - 1;
    }
    *puVar3 = uVar4;
  }
  return;
}


