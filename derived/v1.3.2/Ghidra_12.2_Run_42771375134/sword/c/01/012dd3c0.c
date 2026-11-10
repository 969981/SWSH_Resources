/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dd3c0; name: FUN_012dd3c0
 */


void FUN_012dd3c0(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_80 [24];
  long local_68;
  char *local_60 [5];
  undefined8 uStack_38;
  
  uVar2 = FUN_012de5b0();
  local_60[0] = (char *)0x0;
  FUN_007273c0(uVar2,(uint)param_2 & 1,local_60);
  if (*(int *)(param_1 + 0x490) == 4) {
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
      lVar5 = FUN_012d52c0(0,local_60);
    }
    else {
      puVar3 = (undefined8 *)(**(code **)*puVar6)(puVar6);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
        uVar2 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar2;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      puVar4 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        do {
          if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
            puVar4 = puVar6 + -10;
            goto LAB_012dd468;
          }
          puVar3 = (undefined8 *)*puVar3;
        } while (puVar3 != (undefined8 *)0x0);
        puVar4 = (undefined8 *)0x0;
      }
LAB_012dd468:
      lVar5 = FUN_012d52c0(puVar4,local_60);
    }
    if (lVar5 != 0) {
      if ((param_2 & 1) == 0) {
        FUN_012e06f0(lVar5,0x10bae3972d4ff062);
      }
      else {
        FUN_012e0340(0);
      }
    }
    local_60[0] = (char *)0xcc1a6bc4572b27fa;
    local_60[1] = "Stop_Camp_BallAura_MirrorBall_lp";
    local_60[2] = (char *)0x20;
    local_60[3] = (char *)0xd6cc7d32df5ed590;
    local_60[4] = "Play_Camp_BallAura_MirrorBall_lp";
    uStack_38 = 0x20;
    FUN_006cf0a0(auStack_80,local_60 + (param_2 & 1) * 3);
    FUN_012d7010(auStack_80,param_1);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  return;
}


