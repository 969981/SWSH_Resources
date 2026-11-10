/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0127b1e0; name: FUN_0127b1e0
 */


/* WARNING: Removing unreachable block (ram,0x0127b56c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0127b1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
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
  long local_e0 [12];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  char *local_60;
  long local_58;
  
  lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar7 == 0) {
    if (_DAT_00000060 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    FUN_01127680(&local_58,lVar7);
    lVar10 = *(long *)(local_58 + 0x60);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    if (lVar10 != 0) {
      uVar8 = 0;
      goto LAB_0127b7bc;
    }
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710540 + 200);
  FUN_0122b4d0(&local_68,lVar10,param_2);
  FUN_0122b4d0(&local_70,lVar10,param_3);
  if (local_68 == 0) {
    uVar8 = 0;
joined_r0x0127b328:
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
  }
  else {
    if (local_70 != 0) {
      local_60 = "RequestBrowseSession";
      local_58 = lVar10;
      lVar10 = FUN_01203310(&local_78,lVar10,&local_58,&local_60);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      FUN_0127b800(&local_60,lVar10,param_1);
      pcVar2 = local_60;
      if (lVar7 == 0) {
        local_80 = 0;
      }
      else {
        FUN_01127680(&local_80,lVar7);
      }
      (**(code **)(**(long **)(local_80 + 0x80) + 0x10))(&local_58);
      local_78 = local_58;
      FUN_0122c210(&local_58,pcVar2,&local_78);
      lVar3 = local_58;
      local_e0[0] = local_68;
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      }
      local_f0 = FUN_0127dc30;
      local_100 = &LAB_0127dbe0;
      local_f8 = FUN_0127dbf0;
      local_e8 = &LAB_0127dc50;
      iVar4 = FUN_007dc9a0(lVar3);
      if (iVar4 == 0) {
        pcVar6 = *(code **)(lVar3 + 0x128);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar3 + 0x130) = 0;
          *(undefined8 *)(lVar3 + 0x138) = 0;
          *(undefined8 *)(lVar3 + 0x120) = 0;
          *(undefined8 *)(lVar3 + 0x128) = 0;
          (*pcVar6)(lVar3 + 0x140);
        }
        if (local_f0 != (code *)0x0) {
          (*local_f0)(local_e0,lVar3 + 0x140);
          *(undefined1 **)(lVar3 + 0x138) = local_e8;
          *(code **)(lVar3 + 0x128) = local_f8;
          *(code **)(lVar3 + 0x130) = local_f0;
          *(undefined8 *)(lVar3 + 0x120) = local_100;
        }
LAB_0127b42c:
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      else if (lVar3 != 0) goto LAB_0127b42c;
      lVar5 = local_70;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
      }
      local_160[0] = lVar5;
      local_170 = FUN_0127dcb0;
      local_180 = &LAB_0127dc60;
      local_178 = FUN_0127dc70;
      local_168 = &LAB_0127dcd0;
      iVar4 = FUN_007dc9a0(lVar3);
      if (iVar4 == 0) {
        pcVar6 = *(code **)(lVar3 + 0x228);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar3 + 0x230) = 0;
          *(undefined8 *)(lVar3 + 0x238) = 0;
          *(undefined8 *)(lVar3 + 0x220) = 0;
          *(undefined8 *)(lVar3 + 0x228) = 0;
          (*pcVar6)(lVar3 + 0x240);
        }
        if (local_170 != (code *)0x0) {
          (*local_170)(local_160,lVar3 + 0x240);
          *(undefined1 **)(lVar3 + 0x238) = local_168;
          *(code **)(lVar3 + 0x228) = local_178;
          *(code **)(lVar3 + 0x230) = local_170;
          *(undefined8 *)(lVar3 + 0x220) = local_180;
        }
LAB_0127b4f0:
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      else if (lVar3 != 0) goto LAB_0127b4f0;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      alStack_1e0[0] = lVar7;
      iVar4 = FUN_007dc9a0(lVar3);
      if (iVar4 == 0) {
        pcVar6 = *(code **)(lVar3 + 0x1a8);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar3 + 0x1b0) = 0;
          *(undefined8 *)(lVar3 + 0x1b8) = 0;
          *(undefined8 *)(lVar3 + 0x1a0) = 0;
          *(undefined8 *)(lVar3 + 0x1a8) = 0;
          (*pcVar6)(lVar3 + 0x1c0);
        }
        FUN_0127dd80(alStack_1e0,lVar3 + 0x1c0);
        *(undefined1 **)(lVar3 + 0x1b8) = &LAB_0127dda0;
        *(code **)(lVar3 + 0x1a8) = FUN_0127dd40;
        *(code **)(lVar3 + 0x1b0) = FUN_0127dd80;
        *(undefined8 *)(lVar3 + 0x1a0) = &LAB_0127dce0;
LAB_0127b5c0:
        plVar9 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_007dcc80(lVar3);
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar9);
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar9);
        bVar1 = false;
      }
      else {
        if (lVar3 != 0) goto LAB_0127b5c0;
        FUN_007dcc80(0);
        bVar1 = true;
      }
      FUN_0127dd40(alStack_1e0);
      if (!bVar1) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      pcVar6 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = (code *)0x0;
        local_168 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        local_178 = (code *)0x0;
        (*pcVar6)(local_160);
      }
      if (!bVar1) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      pcVar6 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = (code *)0x0;
        local_e8 = (undefined1 *)0x0;
        local_100 = (undefined1 *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar6)(local_e0);
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      if (local_60 != (char *)0x0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = (char *)0x0;
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      if (lVar7 == 0) {
        lVar10 = 0;
      }
      else {
        FUN_01127680(&local_58,lVar7);
        lVar10 = local_58;
      }
      local_58 = lVar10;
      if (lVar3 != 0) {
        plVar9 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      lVar5 = *(long *)(lVar10 + 0x60);
      *(long *)(lVar10 + 0x60) = lVar3;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      FUN_012ae6d0(*(undefined8 *)(lVar10 + 0x80),0);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      uVar8 = 1;
      goto joined_r0x0127b328;
    }
    uVar8 = 0;
  }
  local_70 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar7 == 0) {
    return uVar8;
  }
LAB_0127b7bc:
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return uVar8;
}


