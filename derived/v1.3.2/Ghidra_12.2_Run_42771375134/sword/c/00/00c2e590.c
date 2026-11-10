/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2e590; name: FUN_00c2e590
 */


ulong FUN_00c2e590(ulong param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long local_248;
  long local_240;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [192];
  long local_160;
  long local_158;
  long local_150;
  int local_148;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_00be66c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        FUN_00c1cf00(&local_150,puVar8 + -10);
        goto joined_r0x00c2e800;
      }
    }
  }
  FUN_00c1cf00(&local_150,0);
joined_r0x00c2e800:
  if (local_150 != 0) {
    puVar8 = *(undefined8 **)(local_150 + 0x60);
    if (puVar8 != (undefined8 *)0x0) {
      plVar4 = (long *)(**(code **)*puVar8)(puVar8);
      lVar5 = FUN_00bd9700();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          puVar8 = puVar8 + -10;
          goto joined_r0x00c2e828;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
joined_r0x00c2e828:
    if (local_150 != 0) {
      (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
      local_150 = 0;
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00bdaa80(&local_150,puVar8);
      if (((char)local_150 == '\0') || (FUN_00bd9cd0(&local_158,puVar8), local_158 == 0)) {
LAB_00c2e7c8:
        bVar1 = false;
      }
      else {
        FUN_00bd9eb0(&local_160,puVar8);
        if (local_160 == 0) {
          bVar1 = false;
        }
        else {
          if ((*(long *)(param_1 + 0x68) != 0) &&
             (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60),
             puVar8 != (undefined8 *)0x0)) {
            plVar4 = (long *)(**(code **)*puVar8)(puVar8);
            lVar5 = FUN_00be66c0();
            for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
              if (plVar4 == (long *)lVar5) {
                puVar8 = puVar8 + -10;
                goto LAB_00c2e6c8;
              }
            }
          }
          puVar8 = (undefined8 *)0x0;
LAB_00c2e6c8:
          uVar6 = FUN_00c1cbf0(puVar8);
          FUN_009fc1c0(auStack_238,uVar6);
          local_240 = local_158;
          if (local_158 != 0) {
            (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
          }
          FUN_009fc400(auStack_238,&local_240);
          if (local_240 != 0) {
            (**(code **)(*(long *)(local_240 + 0x48) + 0x18))();
            local_240 = 0;
          }
          local_248 = local_160;
          if (local_160 != 0) {
            (**(code **)(*(long *)(local_160 + 0x48) + 0x10))();
          }
          bVar2 = FUN_009fc470(auStack_238,&local_248,auStack_220);
          if (local_248 != 0) {
            (**(code **)(*(long *)(local_248 + 0x48) + 0x18))();
            local_248 = 0;
          }
          iVar3 = FUN_009ff9e0(local_158);
          uVar7 = 9;
          if ((bVar2 & local_148 == iVar3) == 0) {
            uVar7 = 10;
          }
          param_1 = (ulong)uVar7;
          FUN_009fc1e0(auStack_238);
          if (local_160 != 0) {
            (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
            local_160 = 0;
          }
          bVar1 = true;
        }
        if (local_158 != 0) {
          (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
        }
        if (!bVar1) goto LAB_00c2e7c8;
        bVar1 = true;
      }
      if (bVar1) goto LAB_00c2e808;
    }
  }
  param_1 = 0x13;
LAB_00c2e808:
  return param_1 & 0xffffffff;
}


