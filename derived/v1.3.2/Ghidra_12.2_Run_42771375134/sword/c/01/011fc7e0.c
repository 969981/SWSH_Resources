/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fc7e0; name: FUN_011fc7e0
 */


uint FUN_011fc7e0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_0120c5a0();
    lVar6 = *(long *)PTR_DAT_02710798;
    lVar5 = *(long *)PTR_DAT_02710848;
    if (((*(long *)PTR_DAT_027185f8 != 0 && lVar6 != 0) && lVar5 != 0) &&
       (uVar2 = FUN_0120e5d0(), (uVar2 & 1) != 0)) {
      lVar3 = *(long *)(lVar6 + 0x1e8);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar4 = *(long *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar5 = *(long *)(lVar5 + 0x90);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar4 = *(long *)(lVar5 + 0x58);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        lVar5 = *(long *)(lVar6 + 0x288);
        if (lVar5 == 0) goto LAB_011fc918;
LAB_011fc87c:
        plVar8 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __src = (void *)FUN_014fba00(lVar5);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      else {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        lVar5 = *(long *)(lVar6 + 0x288);
        if (lVar5 != 0) goto LAB_011fc87c;
LAB_011fc918:
        __src = (void *)FUN_014fba00(0);
      }
      lVar5 = FUN_00c2a5b0(auStack_48,*(undefined8 *)(param_1 + 0x58));
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      memcpy((void *)(lVar5 + 0x60),__src,0x1c8);
      uVar7 = *(undefined8 *)(param_1 + 0x130);
      local_50 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_58 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      plVar8 = (long *)(lVar5 + 0x48);
      local_60 = lVar5;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      local_68 = *(long *)(param_1 + 0x128);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      }
      uVar1 = FUN_0120c150(uVar7,&local_50,&local_58,&local_60,param_1 + 0x50,&local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      goto LAB_011fc8b4;
    }
  }
  uVar1 = 0;
LAB_011fc8b4:
  return uVar1 & 1;
}


