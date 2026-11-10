/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2d8e0; name: FUN_00c2d8e0
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00c2d8e0(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  long local_180;
  long local_178;
  undefined1 auStack_170 [264];
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5f;
  undefined2 local_5b;
  undefined1 local_59;
  long *local_58;
  
  if (*(long *)PTR_DAT_02718f20 != 0) {
    FUN_011ffb60(&local_58);
    if (local_58 == (long *)0x0) {
      return 10;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar8)(puVar8);
      lVar6 = FUN_00be66c0();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar6) {
          FUN_00c1cf00(&local_178,puVar8 + -10);
          goto joined_r0x00c2db30;
        }
      }
    }
    FUN_00c1cf00(&local_178,0);
joined_r0x00c2db30:
    if (local_178 != 0) {
      puVar8 = *(undefined8 **)(local_178 + 0x60);
      if (puVar8 != (undefined8 *)0x0) {
        plVar5 = (long *)(**(code **)*puVar8)(puVar8);
        lVar6 = FUN_00bd9700();
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)lVar6) {
            plVar5 = puVar8 + -10;
            goto joined_r0x00c2db40;
          }
        }
      }
      plVar5 = (long *)0x0;
joined_r0x00c2db40:
      if (local_178 != 0) {
        (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
        local_178 = 0;
      }
      if ((plVar5 != (long *)0x0) && (lVar6 = local_58[4], lVar6 != 0)) {
        plVar9 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        if (*(long *)(lVar6 + 0x1e0) == 0x118) {
          uVar10 = *(undefined8 *)(lVar6 + 0x168);
          uVar1 = *(undefined1 *)(lVar6 + 0x170);
          memcpy(auStack_170,(void *)(lVar6 + 0x60),0x108);
          local_5f = *(undefined4 *)(lVar6 + 0x171);
          local_59 = *(undefined1 *)(lVar6 + 0x177);
          local_5b = *(undefined2 *)(lVar6 + 0x175);
          local_178 = CONCAT71(local_178._1_7_,1);
          local_68 = uVar10;
          local_60 = uVar1;
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar9);
          FUN_00bdaa00(plVar5,&local_178);
          auVar11 = FUN_00c2ea40();
          uVar7 = auVar11._0_8_;
          if ((uVar7 & 0xff) == 0) {
            bVar2 = false;
          }
          else {
            local_180 = *local_58;
            if (local_180 != 0) {
              (**(code **)(*(long *)(local_180 + 0x48) + 0x10))();
            }
            FUN_00bd9d60(plVar5,&local_180);
            if (local_180 != 0) {
              (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
              local_180 = 0;
            }
            uVar3 = FUN_01524bc0(local_58[1]);
            FUN_00bd9ed0(plVar5,uVar3);
            FUN_00bd9f10(plVar5,auVar11._8_8_);
            uVar4 = (**(code **)(*plVar5 + 0x40))(plVar5);
            if (uVar4 != 3) {
              uVar4 = 8;
            }
            uVar7 = (ulong)uVar4;
            bVar2 = true;
          }
          if (bVar2) {
            return uVar7;
          }
        }
        else {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
    }
  }
  return 0x13;
}


