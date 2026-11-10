/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0037d380; name: FUN_0037d380
 */


void FUN_0037d380(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_268 [256];
  undefined8 local_168;
  undefined1 local_160;
  uint7 uStack_15f;
  
  lVar2 = *param_1;
  uVar6 = *param_2;
  puVar3 = (uint *)(lVar2 + 0x10);
  uVar5 = *puVar3;
  if (uVar5 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar5 - 1) * 0x10));
      lVar2 = *param_1;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar5 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) = 1;
    }
  }
  local_160 = 0;
  local_168 = uVar6;
  if (uVar5 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar5 * 0x10);
    puVar1[1] = (ulong)uStack_15f << 8;
    *puVar1 = uVar6;
    *puVar3 = *puVar3 + 1;
    piVar4 = (int *)param_1[5];
  }
  else {
    FUN_00327960(lVar2,&local_168);
    piVar4 = (int *)param_1[5];
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  memset(auStack_268,0,0xe0);
}


