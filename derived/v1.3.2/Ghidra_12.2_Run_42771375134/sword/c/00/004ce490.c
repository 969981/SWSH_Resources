/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ce490; name: FUN_004ce490
 */


void FUN_004ce490(long param_1,long *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(param_1 + 0x160) != 0)) &&
     (1 < *(ushort *)((long)param_2 + 0x12))) {
    puVar1 = (undefined4 *)
             (*param_2 + (ulong)param_3 * 4 * (ulong)*(ushort *)(param_2 + 2) +
             (ulong)(*(ushort *)((long)param_2 + 0x12) - 2) * 4);
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0xb0) + (ulong)(param_3 & 0xffff) * 0x10);
    puVar2[2] = puVar1[1];
    puVar2[3] = *puVar1;
    *puVar2 = puVar1[1];
    puVar2[1] = *puVar1;
    if (1 < *(ushort *)((long)param_2 + 0x12)) {
      puVar1 = (undefined4 *)
               (*param_2 + (ulong)param_3 * 4 * (ulong)*(ushort *)(param_2 + 2) +
               (ulong)(*(ushort *)((long)param_2 + 0x12) - 2) * 4);
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0x160) + (ulong)(param_3 & 0xffff) * 0x10);
      puVar2[2] = puVar1[1];
      puVar2[3] = *puVar1;
      *puVar2 = puVar1[1];
      puVar2[1] = *puVar1;
    }
  }
  return;
}


