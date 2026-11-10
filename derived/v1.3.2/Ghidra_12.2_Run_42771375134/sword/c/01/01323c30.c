/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01323c30; name: FUN_01323c30
 */


void FUN_01323c30(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auStack_28 [8];
  
  if (*(int *)(param_1 + 0x350) != param_2) {
    *(int *)(param_1 + 0x350) = param_2;
    FUN_012dd3c0(*(undefined8 *)(param_1 + 0x318),param_2 == 0);
    FUN_012dd3c0(*(undefined8 *)(param_1 + 800),param_2 == 1);
    FUN_012dd3c0(*(undefined8 *)(param_1 + 0x328),param_2 == 2);
    FUN_012dd3c0(*(undefined8 *)(param_1 + 0x330),param_2 == 3);
    FUN_012dd3c0(*(undefined8 *)(param_1 + 0x338),param_2 == 4);
    FUN_012dd3c0(*(undefined8 *)(param_1 + 0x340),param_2 == 5);
    FUN_012dd3c0(*(undefined8 *)(param_1 + 0x348),param_2 == 6);
    if (param_2 != 7) {
      if ((*(long *)(param_1 + 0x68) == 0) ||
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0))
      {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (undefined8 *)(**(code **)*puVar6)(puVar6);
        if (((*PTR_DAT_02715078 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
          uVar4 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar4;
          __cxa_guard_release(PTR_DAT_02715078);
        }
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          do {
            if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
              puVar3 = puVar6 + -10;
              goto LAB_01323d24;
            }
            puVar2 = (undefined8 *)*puVar2;
          } while (puVar2 != (undefined8 *)0x0);
          puVar3 = (undefined8 *)0x0;
        }
      }
LAB_01323d24:
      uVar4 = FUN_013260a0(puVar3,auStack_28);
      if (*(int *)(param_1 + 0x350) == 7) {
        lVar5 = 0;
      }
      else {
        fVar7 = (float)FUN_012dd3b0(*(undefined8 *)
                                     (param_1 + (long)*(int *)(param_1 + 0x350) * 8 + 0x318));
        lVar5 = (long)(int)(float)(int)(fVar7 + 0.5);
      }
      FUN_01313000(uVar4,lVar5);
    }
  }
  return;
}


