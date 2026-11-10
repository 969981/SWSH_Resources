/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9ead0; name: FUN_00e9ead0
 */


ulong FUN_00e9ead0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  
  uVar2 = FUN_00e46320();
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x188))(param_1,PTR_DAT_0271e8a0,0);
  if ((int)uVar2 != 2) {
    uVar2 = FUN_00f2eea0();
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_00e9eca0(param_1);
      if ((uVar2 & 1) != 0) {
        return 2;
      }
      if ((((long *)param_1[0x83] == (long *)param_1[0x84]) ||
          (lVar8 = *(long *)param_1[0x83], lVar8 == 0)) ||
         (puVar9 = *(undefined8 **)(lVar8 + 0x60), puVar9 == (undefined8 *)0x0)) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(**(code **)*puVar9)(puVar9);
        if (((*PTR_DAT_027150a8 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
          uVar6 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_027150b0 = uVar6;
          __cxa_guard_release(PTR_DAT_027150a8);
        }
        puVar4 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          do {
            if (puVar3 == (undefined8 *)PTR_DAT_027150b0) {
              puVar4 = puVar9 + -10;
              goto LAB_00e9ebc4;
            }
            puVar3 = (undefined8 *)*puVar3;
          } while (puVar3 != (undefined8 *)0x0);
          puVar4 = (undefined8 *)0x0;
        }
      }
LAB_00e9ebc4:
      local_28 = FUN_0069d2b0(puVar4);
      plVar5 = (long *)FUN_006b92e0(&local_28);
      if ((*plVar5 != 0x248cb78e45b7cfed) &&
         (plVar5 = (long *)FUN_006b92e0(&local_28), *plVar5 != 0xade7f9ba76923fc)) {
        return 1;
      }
      uVar7 = 0;
      if ((char)param_1[0xfe] != '\0') {
        uVar7 = 2;
      }
      return (ulong)uVar7;
    }
    uVar2 = 1;
  }
  return uVar2;
}


