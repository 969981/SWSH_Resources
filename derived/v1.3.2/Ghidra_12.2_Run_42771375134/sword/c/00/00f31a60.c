/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f31a60; name: FUN_00f31a60
 */


undefined8 FUN_00f31a60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long local_78 [2];
  undefined1 *local_68;
  long local_60;
  long local_58;
  long local_48;
  
  if (*(int *)(param_1 + 0x220) == 1) {
    if ((*(long *)(param_1 + 0x28) == 0) || (*(char *)(*(long *)(param_1 + 0x28) + 0x170) == '\0'))
    {
      return 0;
    }
    plVar4 = *(long **)(param_1 + 8);
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x200,0x10);
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_0167e1b0(lVar2,*(undefined8 *)(param_1 + 8),param_1 + 0x20);
    *(long **)(lVar2 + 8) = plVar4;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x200;
    *(undefined8 *)(lVar2 + 0x20) = 0x10;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x130) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    *(long *)(param_1 + 0x130) = lVar2;
    FUN_00d98680(local_78,lVar2,*(undefined8 *)(param_1 + 8));
    if (*(long *)(param_1 + 0x138) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    *(long *)(param_1 + 0x138) = local_78[0];
    FUN_0167c600(local_78[0],*(undefined8 *)(param_1 + 0x10));
    if (*(long *)(local_78[0] + 0x188) != 0) {
      lVar1 = *(long *)(local_78[0] + 0x188) << 4;
      plVar4 = (long *)(*(long *)(local_78[0] + 0x180) + 8);
      do {
        while (lVar2 = *plVar4, lVar2 != 0) {
          plVar5 = (long *)(lVar2 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          FUN_007868f0(lVar2,param_1 + 0x140);
          (**(code **)(*plVar5 + 0x18))(plVar5);
          lVar1 = lVar1 + -0x10;
          plVar4 = plVar4 + 2;
          if (lVar1 == 0) goto LAB_00f31d40;
        }
        FUN_007868f0(0,param_1 + 0x140);
        lVar1 = lVar1 + -0x10;
        plVar4 = plVar4 + 2;
      } while (lVar1 != 0);
    }
LAB_00f31d40:
    FUN_0167cd30(*(undefined8 *)(param_1 + 0x138),0);
    local_78[0] = -0x15cdb70b33fad58d;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = 0x76ea93f07b0ae623;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = 0x76ea92f07b0ae470;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = -0x107b8ece49d947d4;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = -0x107b8dce49d94621;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = -0x13ba94382637b738;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = 0x6b5cf572cf804f36;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = 0x6b5cf672cf8050e9;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = -0x5a3ec08d66389de9;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = -0x5a3ec18d66389f9c;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = -0x52347bc91f386819;
    puVar3 = (undefined8 *)FUN_0167baf0(*(undefined8 *)(param_1 + 0x138),local_78);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00786f10(*puVar3,*(undefined4 *)(puVar3 + 1),0);
    }
    local_78[0] = -0x52347bc91f386819;
    FUN_0167bdb0(0x3f800000,*(undefined8 *)(param_1 + 0x138),local_78);
  }
  else {
    if (*(int *)(param_1 + 0x220) != 0) {
      return 1;
    }
    FUN_01064460(local_78,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(long *)(param_1 + 0x10) = local_78[0];
    FUN_014bb440(local_78,&DAT_02663bc8);
    FUN_00d99d50(&local_48,*(undefined8 *)PTR_DAT_02710788,1,local_78,0,*(undefined8 *)(param_1 + 8)
                 ,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(long *)(param_1 + 0x28) = local_48;
    if (local_48 != 0) {
      plVar4 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if ((*(long *)(param_1 + 0x30) != 0) || (*(long *)(param_1 + 0xb0) != 0)) {
        FUN_006e1e70(local_48,param_1 + 0x20,1);
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if ((local_60 != 0) && (local_78[0] != 0)) {
      (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
    }
    local_78[0] = 0;
    local_78[1] = 0xcbf29ce484222645;
    local_68 = &DAT_01d38550;
    local_60 = 0;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
  }
  *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
  return 0;
}


