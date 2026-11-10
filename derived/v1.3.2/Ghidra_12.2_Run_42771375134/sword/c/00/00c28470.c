/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c28470; name: FUN_00c28470
 */


void FUN_00c28470(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong local_3420 [7];
  undefined1 auStack_33e8 [13208];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00c1cc60(local_3420,puVar3 + -10);
        if (local_3420[0] == 0) {
          return;
        }
        (**(code **)(*(long *)(local_3420[0] + 0x48) + 0x18))();
        if (*(long *)(param_1 + 0x68) == 0) {
          return;
        }
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
        if (puVar3 == (undefined8 *)0x0) {
          return;
        }
        plVar1 = (long *)(**(code **)*puVar3)(puVar3);
        lVar2 = FUN_00be66c0();
        while( true ) {
          if (plVar1 == (long *)0x0) {
            return;
          }
          if (plVar1 == (long *)lVar2) break;
          plVar1 = (long *)*plVar1;
        }
        FUN_00c1cce0(local_3420,puVar3 + -10);
        lVar2 = FUN_00be53f0(local_3420);
        if (local_3420[0] != 0) {
          (**(code **)(*(long *)(local_3420[0] + 0x48) + 0x18))();
          local_3420[0] = 0;
        }
        if (lVar2 == 0) {
          return;
        }
        if (*(long *)(lVar2 + 8) != 0) {
          local_3420[0] = local_3420[0] & 0xffffffff00000000;
          local_3420[1] = 0;
          local_3420[4] = 0;
          local_3420[5] = 0;
          local_3420[2] = 0;
          local_3420[3] = 0;
          local_3420[6] = 0x100000001;
                    /* WARNING: Subroutine does not return */
          memset(auStack_33e8,0,0x2b28);
        }
        return;
      }
    }
  }
  return;
}


