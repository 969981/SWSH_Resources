/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2b5f0; name: FUN_00c2b5f0
 */


undefined8 FUN_00c2b5f0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong local_3420 [7];
  undefined1 auStack_33e8 [13208];
  
  if (*(long *)(*(long *)PTR_DAT_02710798 + 0x228) != 0) {
    plVar2 = (long *)(*(long *)(*(long *)PTR_DAT_02710798 + 0x228) + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0))
      {
        plVar2 = (long *)(**(code **)*puVar3)(puVar3);
        lVar1 = FUN_00be66c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar1) {
            puVar3 = puVar3 + -10;
            goto LAB_00c2b684;
          }
        }
      }
      puVar3 = (undefined8 *)0x0;
LAB_00c2b684:
      FUN_00c1cec0(local_3420,puVar3);
      if ((local_3420[0] != 0) &&
         (puVar3 = *(undefined8 **)(local_3420[0] + 0x60), puVar3 != (undefined8 *)0x0)) {
        plVar2 = (long *)(**(code **)*puVar3)(puVar3);
        lVar1 = FUN_00c1bbc0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar1) {
            FUN_00bdc320(puVar3 + -10);
            if (local_3420[0] == 0) goto LAB_00c2b6f0;
            goto LAB_00c2b6e0;
          }
        }
      }
      FUN_00bdc320(0);
      if (local_3420[0] != 0) {
LAB_00c2b6e0:
        (**(code **)(*(long *)(local_3420[0] + 0x48) + 0x18))();
        local_3420[0] = 0;
      }
LAB_00c2b6f0:
      local_3420[0] = local_3420[0] & 0xffffffff00000000;
      local_3420[5] = 0;
      local_3420[4] = 0;
      local_3420[3] = 0;
      local_3420[2] = 0;
      local_3420[1] = 0;
      local_3420[6] = 0x100000001;
                    /* WARNING: Subroutine does not return */
      memset(auStack_33e8,0,0x2b28);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return 0;
}


