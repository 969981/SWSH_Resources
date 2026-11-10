/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbf8c0; name: FUN_00dbf8c0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00dbf8c0(long param_1,ulong *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte local_50 [32];
  undefined8 local_28;
  
  if (((*(long **)(param_1 + 0x418) != *(long **)(param_1 + 0x420)) &&
      (lVar4 = **(long **)(param_1 + 0x418), lVar4 != 0)) &&
     (puVar7 = *(undefined8 **)(lVar4 + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
      uVar3 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar3;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_027150b0) {
        local_28 = FUN_0069d2b0(puVar7 + -10);
        lVar4 = FUN_006b92e0(&local_28);
        uVar6 = param_2[2];
        if (0x1f < uVar6) {
          return false;
        }
        if (*(ulong *)(lVar4 + 0x10) <= uVar6 - 1) {
          return false;
        }
        local_50[0x10] = 0;
        local_50[0x11] = 0;
        local_50[0x12] = 0;
        local_50[0x13] = 0;
        local_50[0x14] = 0;
        local_50[0x15] = 0;
        local_50[0x16] = 0;
        local_50[0x17] = 0;
        local_50[0x18] = 0;
        local_50[0x19] = 0;
        local_50[0x1a] = 0;
        local_50[0x1b] = 0;
        local_50[0x1c] = 0;
        local_50[0x1d] = 0;
        local_50[0x1e] = 0;
        local_50[0x1f] = 0;
        local_50[0] = 0;
        local_50[1] = 0;
        local_50[2] = 0;
        local_50[3] = 0;
        local_50[4] = 0;
        local_50[5] = 0;
        local_50[6] = 0;
        local_50[7] = 0;
        local_50[8] = 0;
        local_50[9] = 0;
        local_50[10] = 0;
        local_50[0xb] = 0;
        local_50[0xc] = 0;
        local_50[0xd] = 0;
        local_50[0xe] = 0;
        local_50[0xf] = 0;
        uVar8 = 0xcbf29ce484222645;
        snprintf((char *)local_50,uVar6 + 1,"%s",
                 *(long *)(lVar4 + 8) + (*(ulong *)(lVar4 + 0x10) - uVar6));
        if (local_50[0] != 0) {
          pbVar5 = (byte *)((ulong)local_50 | 1);
          do {
            uVar8 = (uVar8 ^ local_50[0]) * 0x100000001b3;
            local_50[0] = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (local_50[0] != 0);
        }
        return uVar8 == *param_2;
      }
    }
  }
  return false;
}


