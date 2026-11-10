/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0127b980; name: FUN_0127b980
 */


/* WARNING: Removing unreachable block (ram,0x0127bcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0127b980(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long alStack_1e0 [12];
  undefined1 *local_180;
  code *local_178;
  code *local_170;
  undefined1 *local_168;
  long local_160 [12];
  undefined1 *local_100;
  code *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  long local_e0 [13];
  long local_78;
  long local_70;
  char *local_68;
  long local_60;
  undefined1 auStack_58 [8];
  
  lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar6 == 0) {
    if (_DAT_00000060 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    FUN_01127680(&local_60,lVar6);
    lVar9 = *(long *)(local_60 + 0x60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    if (lVar9 != 0) {
      uVar7 = 0;
      goto LAB_0127bebc;
    }
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_02710540 + 200);
  FUN_0122b4d0(&local_70,lVar9,param_1);
  FUN_0122b4d0(&local_78,lVar9,param_2);
  if (local_70 == 0) {
    uVar7 = 0;
joined_r0x0127bb0c:
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
  }
  else {
    if (local_78 != 0) {
      local_68 = "RequestCloseSession";
      local_60 = lVar9;
      lVar9 = FUN_01203310(auStack_58,lVar9,&local_60,&local_68);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      FUN_0127bf00(&local_60,lVar9);
      lVar2 = local_60;
      local_e0[0] = local_70;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
      }
      local_f0 = FUN_0127e8f0;
      local_100 = &LAB_0127e8a0;
      local_f8 = FUN_0127e8b0;
      local_e8 = &LAB_0127e910;
      iVar3 = FUN_007dc9a0(lVar2);
      if (iVar3 == 0) {
        pcVar5 = *(code **)(lVar2 + 0x128);
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar2 + 0x130) = 0;
          *(undefined8 *)(lVar2 + 0x138) = 0;
          *(undefined8 *)(lVar2 + 0x120) = 0;
          *(undefined8 *)(lVar2 + 0x128) = 0;
          (*pcVar5)(lVar2 + 0x140);
        }
        if (local_f0 != (code *)0x0) {
          (*local_f0)(local_e0,lVar2 + 0x140);
          *(undefined1 **)(lVar2 + 0x138) = local_e8;
          *(code **)(lVar2 + 0x128) = local_f8;
          *(code **)(lVar2 + 0x130) = local_f0;
          *(undefined8 *)(lVar2 + 0x120) = local_100;
        }
LAB_0127bb74:
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      else if (lVar2 != 0) goto LAB_0127bb74;
      lVar4 = local_78;
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
      }
      local_160[0] = lVar4;
      local_170 = FUN_0127e970;
      local_180 = &LAB_0127e920;
      local_178 = FUN_0127e930;
      local_168 = &LAB_0127e990;
      iVar3 = FUN_007dc9a0(lVar2);
      if (iVar3 == 0) {
        pcVar5 = *(code **)(lVar2 + 0x228);
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar2 + 0x230) = 0;
          *(undefined8 *)(lVar2 + 0x238) = 0;
          *(undefined8 *)(lVar2 + 0x220) = 0;
          *(undefined8 *)(lVar2 + 0x228) = 0;
          (*pcVar5)(lVar2 + 0x240);
        }
        if (local_170 != (code *)0x0) {
          (*local_170)(local_160,lVar2 + 0x240);
          *(undefined1 **)(lVar2 + 0x238) = local_168;
          *(code **)(lVar2 + 0x228) = local_178;
          *(code **)(lVar2 + 0x230) = local_170;
          *(undefined8 *)(lVar2 + 0x220) = local_180;
        }
LAB_0127bc38:
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      else if (lVar2 != 0) goto LAB_0127bc38;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      alStack_1e0[0] = lVar6;
      iVar3 = FUN_007dc9a0(lVar2);
      if (iVar3 == 0) {
        pcVar5 = *(code **)(lVar2 + 0x1a8);
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar2 + 0x1b0) = 0;
          *(undefined8 *)(lVar2 + 0x1b8) = 0;
          *(undefined8 *)(lVar2 + 0x1a0) = 0;
          *(undefined8 *)(lVar2 + 0x1a8) = 0;
          (*pcVar5)(lVar2 + 0x1c0);
        }
        FUN_0127ea40(alStack_1e0,lVar2 + 0x1c0);
        *(undefined1 **)(lVar2 + 0x1b8) = &LAB_0127ea60;
        *(code **)(lVar2 + 0x1a8) = FUN_0127ea00;
        *(code **)(lVar2 + 0x1b0) = FUN_0127ea40;
        *(undefined8 *)(lVar2 + 0x1a0) = &LAB_0127e9a0;
LAB_0127bd08:
        plVar8 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_007dcc80(lVar2);
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(plVar8);
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar8);
        bVar1 = false;
      }
      else {
        if (lVar2 != 0) goto LAB_0127bd08;
        FUN_007dcc80(0);
        bVar1 = true;
      }
      FUN_0127ea00(alStack_1e0);
      if (!bVar1) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      pcVar5 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = (code *)0x0;
        local_168 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        local_178 = (code *)0x0;
        (*pcVar5)(local_160);
      }
      if (!bVar1) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      pcVar5 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = (code *)0x0;
        local_e8 = (undefined1 *)0x0;
        local_100 = (undefined1 *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar5)(local_e0);
      }
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      if (lVar6 == 0) {
        lVar9 = 0;
      }
      else {
        FUN_01127680(&local_60,lVar6);
        lVar9 = local_60;
      }
      local_60 = lVar9;
      if (lVar2 != 0) {
        plVar8 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      lVar4 = *(long *)(lVar9 + 0x60);
      *(long *)(lVar9 + 0x60) = lVar2;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      FUN_012ae6d0(*(undefined8 *)(lVar9 + 0x80),0);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      }
      uVar7 = 1;
      goto joined_r0x0127bb0c;
    }
    uVar7 = 0;
  }
  local_78 = 0;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar6 == 0) {
    return uVar7;
  }
LAB_0127bebc:
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return uVar7;
}


