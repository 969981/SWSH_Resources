/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5ad30; name: FUN_00e5ad30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00e5ad30(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  local_50 = *param_3;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_58 = *param_4;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_60 = *param_5;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  uVar4 = FUN_00db5ea0(param_1,param_2,&local_50,&local_58,&local_60,param_6,param_7);
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
  if ((uVar4 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar10 == 0) {
      uVar9 = _DAT_000007c0;
    }
    else {
      plVar11 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      uVar9 = *(undefined8 *)(lVar10 + 0x7c0);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    puVar5 = (undefined8 *)FUN_00f4c1c0(uVar9,param_1 + 0x3b0);
    *(undefined8 *)(param_1 + 0x7e8) = *puVar5;
    uVar1 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *(undefined8 *)(param_1 + 0x808) = puVar5[4];
    *(undefined8 *)(param_1 + 0x800) = uVar8;
    *(undefined8 *)(param_1 + 0x7f8) = uVar7;
    *(undefined8 *)(param_1 + 0x7f0) = uVar1;
    uVar1 = puVar5[5];
    uVar7 = puVar5[6];
    uVar8 = puVar5[7];
    *(undefined8 *)(param_1 + 0x828) = puVar5[8];
    *(undefined8 *)(param_1 + 0x820) = uVar8;
    *(undefined8 *)(param_1 + 0x818) = uVar7;
    *(undefined8 *)(param_1 + 0x810) = uVar1;
    uVar1 = puVar5[9];
    uVar8 = puVar5[10];
    uVar7 = puVar5[0xb];
    *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined8 *)(param_1 + 0x840) = uVar7;
    *(undefined8 *)(param_1 + 0x838) = uVar8;
    *(undefined8 *)(param_1 + 0x830) = uVar1;
    puVar5 = (undefined8 *)FUN_00f4c1c0(uVar9,param_1 + 0x420);
    *(undefined8 *)(param_1 + 0x850) = *puVar5;
    uVar1 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *(undefined8 *)(param_1 + 0x870) = puVar5[4];
    *(undefined8 *)(param_1 + 0x868) = uVar8;
    *(undefined8 *)(param_1 + 0x860) = uVar7;
    *(undefined8 *)(param_1 + 0x858) = uVar1;
    uVar1 = puVar5[5];
    uVar7 = puVar5[6];
    uVar8 = puVar5[7];
    *(undefined8 *)(param_1 + 0x890) = puVar5[8];
    *(undefined8 *)(param_1 + 0x888) = uVar8;
    *(undefined8 *)(param_1 + 0x880) = uVar7;
    *(undefined8 *)(param_1 + 0x878) = uVar1;
    uVar1 = puVar5[9];
    uVar8 = puVar5[10];
    uVar7 = puVar5[0xb];
    *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined8 *)(param_1 + 0x8a8) = uVar7;
    *(undefined8 *)(param_1 + 0x8a0) = uVar8;
    *(undefined8 *)(param_1 + 0x898) = uVar1;
    puVar5 = (undefined8 *)FUN_00f4c1c0(uVar9,param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x8b8) = *puVar5;
    uVar1 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *(undefined8 *)(param_1 + 0x8d8) = puVar5[4];
    *(undefined8 *)(param_1 + 0x8d0) = uVar8;
    *(undefined8 *)(param_1 + 0x8c8) = uVar7;
    *(undefined8 *)(param_1 + 0x8c0) = uVar1;
    uVar1 = puVar5[5];
    uVar7 = puVar5[6];
    uVar8 = puVar5[7];
    *(undefined8 *)(param_1 + 0x8f8) = puVar5[8];
    *(undefined8 *)(param_1 + 0x8f0) = uVar8;
    *(undefined8 *)(param_1 + 0x8e8) = uVar7;
    *(undefined8 *)(param_1 + 0x8e0) = uVar1;
    uVar1 = puVar5[9];
    uVar8 = puVar5[10];
    uVar7 = puVar5[0xb];
    *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined8 *)(param_1 + 0x910) = uVar7;
    *(undefined8 *)(param_1 + 0x908) = uVar8;
    *(undefined8 *)(param_1 + 0x900) = uVar1;
    puVar5 = (undefined8 *)FUN_00f4c1c0(uVar9,param_1 + 0x500);
    *(undefined8 *)(param_1 + 0x920) = *puVar5;
    uVar1 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *(undefined8 *)(param_1 + 0x940) = puVar5[4];
    *(undefined8 *)(param_1 + 0x938) = uVar8;
    *(undefined8 *)(param_1 + 0x930) = uVar7;
    *(undefined8 *)(param_1 + 0x928) = uVar1;
    uVar1 = puVar5[5];
    uVar7 = puVar5[6];
    uVar8 = puVar5[7];
    *(undefined8 *)(param_1 + 0x960) = puVar5[8];
    *(undefined8 *)(param_1 + 0x958) = uVar8;
    *(undefined8 *)(param_1 + 0x950) = uVar7;
    *(undefined8 *)(param_1 + 0x948) = uVar1;
    uVar1 = puVar5[9];
    uVar8 = puVar5[10];
    uVar7 = puVar5[0xb];
    *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined8 *)(param_1 + 0x978) = uVar7;
    *(undefined8 *)(param_1 + 0x970) = uVar8;
    *(undefined8 *)(param_1 + 0x968) = uVar1;
    puVar5 = (undefined8 *)FUN_00f4c1c0(uVar9,param_1 + 0x570);
    *(undefined8 *)(param_1 + 0x988) = *puVar5;
    uVar1 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *(undefined8 *)(param_1 + 0x9a8) = puVar5[4];
    *(undefined8 *)(param_1 + 0x9a0) = uVar8;
    *(undefined8 *)(param_1 + 0x998) = uVar7;
    *(undefined8 *)(param_1 + 0x990) = uVar1;
    uVar1 = puVar5[5];
    uVar7 = puVar5[6];
    uVar8 = puVar5[7];
    *(undefined8 *)(param_1 + 0x9c8) = puVar5[8];
    *(undefined8 *)(param_1 + 0x9c0) = uVar8;
    *(undefined8 *)(param_1 + 0x9b8) = uVar7;
    *(undefined8 *)(param_1 + 0x9b0) = uVar1;
    uVar1 = puVar5[9];
    uVar8 = puVar5[10];
    uVar7 = puVar5[0xb];
    *(undefined4 *)(param_1 + 0x9e8) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined8 *)(param_1 + 0x9e0) = uVar7;
    *(undefined8 *)(param_1 + 0x9d8) = uVar8;
    *(undefined8 *)(param_1 + 0x9d0) = uVar1;
    puVar5 = (undefined8 *)FUN_00f4c1c0(uVar9,param_1 + 0x5e0);
    *(undefined8 *)(param_1 + 0x9f0) = *puVar5;
    uVar1 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *(undefined8 *)(param_1 + 0xa10) = puVar5[4];
    *(undefined8 *)(param_1 + 0xa08) = uVar8;
    *(undefined8 *)(param_1 + 0xa00) = uVar7;
    *(undefined8 *)(param_1 + 0x9f8) = uVar1;
    uVar1 = puVar5[5];
    uVar7 = puVar5[6];
    uVar8 = puVar5[7];
    *(undefined8 *)(param_1 + 0xa30) = puVar5[8];
    *(undefined8 *)(param_1 + 0xa28) = uVar8;
    *(undefined8 *)(param_1 + 0xa20) = uVar7;
    *(undefined8 *)(param_1 + 0xa18) = uVar1;
    uVar1 = puVar5[9];
    uVar8 = puVar5[10];
    uVar7 = puVar5[0xb];
    *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined8 *)(param_1 + 0xa48) = uVar7;
    *(undefined8 *)(param_1 + 0xa40) = uVar8;
    *(undefined8 *)(param_1 + 0xa38) = uVar1;
    puVar5 = (undefined8 *)FUN_00f4c1c0(uVar9,param_1 + 0x650);
    *(undefined8 *)(param_1 + 0xa58) = *puVar5;
    uVar1 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *(undefined8 *)(param_1 + 0xa78) = puVar5[4];
    *(undefined8 *)(param_1 + 0xa70) = uVar8;
    *(undefined8 *)(param_1 + 0xa68) = uVar7;
    *(undefined8 *)(param_1 + 0xa60) = uVar1;
    uVar1 = puVar5[5];
    uVar7 = puVar5[6];
    uVar8 = puVar5[7];
    *(undefined8 *)(param_1 + 0xa98) = puVar5[8];
    *(undefined8 *)(param_1 + 0xa90) = uVar8;
    *(undefined8 *)(param_1 + 0xa88) = uVar7;
    *(undefined8 *)(param_1 + 0xa80) = uVar1;
    uVar1 = puVar5[9];
    uVar8 = puVar5[10];
    uVar7 = puVar5[0xb];
    *(undefined4 *)(param_1 + 0xab8) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined8 *)(param_1 + 0xab0) = uVar7;
    *(undefined8 *)(param_1 + 0xaa8) = uVar8;
    *(undefined8 *)(param_1 + 0xaa0) = uVar1;
    puVar5 = (undefined8 *)FUN_00f4c1c0(uVar9,param_1 + 0x6c0);
    *(undefined8 *)(param_1 + 0xac0) = *puVar5;
    uVar1 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *(undefined8 *)(param_1 + 0xae0) = puVar5[4];
    *(undefined8 *)(param_1 + 0xad8) = uVar8;
    *(undefined8 *)(param_1 + 0xad0) = uVar7;
    *(undefined8 *)(param_1 + 0xac8) = uVar1;
    uVar1 = puVar5[5];
    uVar7 = puVar5[6];
    uVar8 = puVar5[7];
    *(undefined8 *)(param_1 + 0xb00) = puVar5[8];
    *(undefined8 *)(param_1 + 0xaf8) = uVar8;
    *(undefined8 *)(param_1 + 0xaf0) = uVar7;
    *(undefined8 *)(param_1 + 0xae8) = uVar1;
    uVar1 = puVar5[9];
    uVar8 = puVar5[10];
    uVar7 = puVar5[0xb];
    *(undefined4 *)(param_1 + 0xb20) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined8 *)(param_1 + 0xb18) = uVar7;
    *(undefined8 *)(param_1 + 0xb10) = uVar8;
    *(undefined8 *)(param_1 + 0xb08) = uVar1;
    puVar5 = (undefined8 *)FUN_00f4c1c0(uVar9,param_1 + 0x730);
    *(undefined8 *)(param_1 + 0xb28) = *puVar5;
    uVar9 = puVar5[1];
    uVar8 = puVar5[2];
    uVar1 = puVar5[3];
    *(undefined8 *)(param_1 + 0xb48) = puVar5[4];
    *(undefined8 *)(param_1 + 0xb40) = uVar1;
    *(undefined8 *)(param_1 + 0xb38) = uVar8;
    *(undefined8 *)(param_1 + 0xb30) = uVar9;
    uVar9 = puVar5[5];
    uVar8 = puVar5[6];
    uVar1 = puVar5[7];
    *(undefined8 *)(param_1 + 0xb68) = puVar5[8];
    *(undefined8 *)(param_1 + 0xb60) = uVar1;
    *(undefined8 *)(param_1 + 0xb58) = uVar8;
    *(undefined8 *)(param_1 + 0xb50) = uVar9;
    uVar9 = puVar5[9];
    uVar1 = puVar5[10];
    uVar8 = puVar5[0xb];
    *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined8 *)(param_1 + 0xb80) = uVar8;
    *(undefined8 *)(param_1 + 0xb78) = uVar1;
    *(undefined8 *)(param_1 + 0xb70) = uVar9;
    bVar3 = FUN_00fa4210();
    *(byte *)(param_1 + 0x7e0) = bVar3 & 1;
    if ((*(long *)(param_1 + 0xc68) == 0) || (*(int *)(*(long *)(param_1 + 0xc68) + 0x54) == 0)) {
      plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
      for (plVar11 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar11 != plVar2;
          plVar11 = plVar11 + 1) {
        plVar6 = (long *)*plVar11;
        uVar4 = FUN_015b5320(plVar6 + 10);
        if (((uVar4 & 1) != 0) &&
           (uVar4 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar4 & 1) == 0)) {
          (**(code **)(*plVar6 + 0x10))(&local_48,plVar6);
          if (*(long *)(param_1 + 0xc68) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0xc68) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0xc68) = 0;
          }
          *(undefined8 *)(param_1 + 0xc68) = local_48;
          break;
        }
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}


