/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f1350; name: FUN_006f1350
 */


void FUN_006f1350(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_006f1a40();
  puVar1 = PTR_DAT_02715770 + 0x70;
  plVar6 = param_1 + 0x1c;
  *param_1 = (long)(PTR_DAT_02715770 + 0x10);
  param_1[9] = (long)puVar1;
  plVar7 = param_1 + 0x15;
  *plVar7 = 0;
  plVar8 = param_1 + 0x16;
  *plVar8 = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x200000000;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = -1;
  FUN_019a4fe0(plVar6);
  FUN_019a5590(param_1 + 0xe4);
  FUN_019a5590(param_1 + 0xef);
  FUN_019a5490();
  FUN_019a5490();
  *(undefined2 *)(param_1 + 0x114) = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  nn::vi::Initialize();
  nn::vi::OpenDefaultDisplay((Display **)(param_1 + 0x112));
  nn::vi::CreateLayer((Layer **)(param_1 + 0x113),(Display *)param_1[0x112]);
  nn::vi::GetNativeWindow((void **)(param_1 + 0xe1),(Layer *)param_1[0x113]);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  FUN_0199c1b0(&local_a0);
  puVar1 = PTR_DAT_027155e8;
  local_88 = param_1[0x113];
  local_98 = param_2[1];
  local_a0 = CONCAT44(*(undefined4 *)(param_2 + 2),(undefined4)local_a0);
  local_a0 = CONCAT71(local_a0._1_7_,2);
  uVar9 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
  uVar2 = FUN_019a4f40(PTR_DAT_027155e8,&local_a0);
  uVar3 = FUN_019a4ef0(puVar1,&local_a0);
  FUN_006f1b70(&local_c0,uVar9,1,uVar2,uVar3);
  *plVar8 = local_c0;
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  param_1[0x17] = local_b8;
  param_1[0x18] = local_b0;
  param_1[0x19] = local_a8;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xffffffffffffffff;
  local_a8 = 0;
  FUN_006f6820(&local_c0);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  uVar2 = FUN_006f6880(plVar8);
  puVar1 = PTR_DAT_027155e8;
  FUN_019a5010(plVar6,PTR_DAT_027155e8,&local_a0,uVar2,param_1[0x18],param_1[0x19]);
  FUN_019a5370(plVar6,param_1 + 0x110,2);
  FUN_019a52d0(plVar6,param_1 + 0xe2,2);
  local_a0 = 0;
  local_98 = 0;
  FUN_0199c1f0(&local_a0);
  FUN_019a55c0(param_1 + 0xe4,puVar1,&local_a0);
  FUN_019a55c0(param_1 + 0xef,puVar1,&local_a0);
  local_a0 = 0;
  local_98 = 0;
  FUN_0199c1e0(&local_a0);
  FUN_019a54c0(param_1 + 0xfa,puVar1,&local_a0);
  FUN_019a54c0(param_1 + 0x105,puVar1,&local_a0);
  local_a0 = *param_2;
  local_98 = param_2[1];
  local_80 = param_2[4];
  uStack_78 = param_2[5];
  local_70 = param_2[6];
  uStack_68 = param_2[7];
  local_88 = CONCAT44(0x1307,(int)param_2[3]);
  local_90 = CONCAT44((int)((ulong)param_2[2] >> 0x20),0x1307);
  plVar6 = (long *)param_1[1];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0x590,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_006f1ba0(lVar5,&local_a0);
  *(long **)(lVar5 + 8) = plVar6;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x590;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*plVar7 != 0) {
    (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
    *plVar7 = 0;
  }
  *plVar7 = lVar5;
  return;
}


