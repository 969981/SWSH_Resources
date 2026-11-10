/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003295b0; name: FUN_003295b0
 */


void FUN_003295b0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 local_c0;
  undefined1 local_b8;
  uint7 uStack_b7;
  
  lVar2 = *param_1;
  pcVar6 = (code *)param_2[2];
  uVar7 = *param_2;
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
  local_b8 = 0;
  local_c0 = uVar7;
  if (uVar5 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar5 * 0x10);
    puVar1[1] = (ulong)uStack_b7 << 8;
    *puVar1 = uVar7;
    *puVar3 = *puVar3 + 1;
    piVar4 = (int *)param_1[6];
  }
  else {
    FUN_00327960(lVar2,&local_c0);
    piVar4 = (int *)param_1[6];
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  (*pcVar6)(param_1[2]);
                    /* WARNING: Subroutine does not return */
  memset(&local_c0,0,0x80);
}


