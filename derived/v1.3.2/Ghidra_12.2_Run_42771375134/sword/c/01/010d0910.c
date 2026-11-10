/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d0910; name: FUN_010d0910
 */


void FUN_010d0910(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((*(long *)(param_2 + 0xf0) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0xf0) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_0271cc90 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271cc90), iVar1 != 0)) {
      uVar6 = FUN_009b7e90();
      *(undefined8 *)PTR_DAT_0271cc98 = uVar6;
      __cxa_guard_release(PTR_DAT_0271cc90);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_0271cc98) {
        plVar2 = *(long **)(param_2 + 8);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,400,0x10);
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0xb8))(plVar2);
        }
        FUN_009fe380(lVar4,plVar2);
        *(long **)(lVar4 + 8) = plVar2;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 400;
        *(undefined8 *)(lVar4 + 0x20) = 0x10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar4 != 0) {
          plVar2 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_009fe680(lVar4,puVar7 + 7);
          (**(code **)(*plVar2 + 0x10))(plVar2);
          uVar5 = FUN_009fec70(lVar4);
          if ((uVar5 & 1) == 0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
          else {
            uVar5 = FUN_009fecc0(lVar4);
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar2);
            if ((uVar5 & 1) != 0) {
              *param_1 = lVar4;
              (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar2);
              goto LAB_010d0ac0;
            }
          }
          *param_1 = 0;
LAB_010d0ac0:
                    /* WARNING: Could not recover jumptable at 0x010d0adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x18))(plVar2);
          return;
        }
        FUN_009fe680(0,puVar7 + 7);
        break;
      }
    }
  }
  *param_1 = 0;
  return;
}


