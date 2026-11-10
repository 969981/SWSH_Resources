/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bf420; name: FUN_014bf420
 */


void FUN_014bf420(long *param_1,undefined8 param_2,long param_3,int param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_02710848;
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  FUN_0077d520(*(undefined8 *)(lVar12 + 0x810),param_2);
  FUN_014c62d0(*(undefined8 *)(lVar12 + 0x808),*(undefined8 *)(lVar12 + 0x818),
               *(undefined8 *)(lVar12 + 0x810));
  lVar11 = *(long *)(lVar12 + 0x818);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  uVar8 = FUN_0077d470(lVar11);
  plVar9 = (long *)FUN_019cc190(param_1);
  if ((plVar9 == (long *)0x0) || (iVar2 = (**(code **)(*plVar9 + 0x48))(), iVar2 != 1)) {
    if ((param_4 != 10) && (DAT_02a7496c != param_4)) {
      lVar12 = *(long *)(*(long *)puVar1 + 0x90);
      if (lVar12 == 0) {
        FUN_0100bc80(&local_68,0,uVar8,param_4);
      }
      else {
        plVar9 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0100bc80(&local_68,lVar12,uVar8,param_4);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      uVar8 = FUN_0077d470(local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
    }
    if (param_3 == 0) {
      puVar13 = &DAT_02a74970;
      FUN_014bd830(&DAT_02a74970);
      DAT_02a74988._0_4_ = 0;
    }
    else {
      puVar13 = *(undefined8 **)(param_3 + 0x58);
      FUN_014bd830(puVar13);
      *(int *)(puVar13 + 3) = (int)*(float *)(param_1 + 10);
    }
    *(ushort *)((long)param_1 + 0x114) =
         *(ushort *)((long)param_1 + 0x114) & 0xfffb |
         (*(ushort *)((long)param_1 + 0x114) >> 2 & 1 |
         (ushort)((undefined8 *)param_1[0x21] != puVar13)) << 2;
    if ((undefined8 *)param_1[0x21] != puVar13) {
      param_1[0x21] = (long)puVar13;
    }
    iVar2 = DAT_02a7496c;
    if (param_4 != 10) {
      iVar2 = param_4;
    }
    uVar3 = FUN_014bf850(param_1,iVar2,1);
    *(undefined4 *)((long)puVar13 + 0x24) = uVar3;
    lVar12 = FUN_019c1410(param_1,&DAT_01d0b576);
    if (lVar12 == 0) {
      lVar12 = FUN_019c1410(param_1,"g2d_fw");
    }
    puVar1 = PTR_DAT_02710820;
    uVar10 = FUN_014c26c0(*(undefined8 *)PTR_DAT_02710820,uVar3,iVar2);
    FUN_019cc1a0(param_1,uVar10);
    if (lVar12 != 0) {
      fVar15 = *(float *)(lVar12 + (ulong)*(uint *)(lVar12 + 4));
      lVar12 = FUN_019c1410(param_1,&DAT_01d07b51);
      if (lVar12 == 0) {
        FUN_019c1410(param_1,"no_short");
      }
      uVar10 = FUN_019cc190(param_1);
      iVar4 = FUN_014bf990(fVar15,uVar8,uVar10,0);
      fVar14 = (float)iVar4;
      if (*(float *)(param_1 + 10) < fVar14) {
        fVar15 = fVar15 * (*(float *)(param_1 + 10) / fVar14) + DAT_01d4bfbc;
        fVar14 = DAT_01d4bfbc;
      }
      FUN_014c3350(uVar3,10);
      local_68 = CONCAT44(fVar14,fVar15);
      FUN_019cc360(param_1,&local_68);
    }
    uVar5 = FUN_0077d680(uVar8);
    uVar6 = FUN_019ca7f0(param_1);
    if ((uVar6 & 0xffff) < uVar5) {
      (**(code **)(*param_1 + 0x110))(param_1,&DAT_02158da8,0,0);
      goto joined_r0x014bf720;
    }
    uVar10 = *(undefined8 *)puVar1;
    uVar7 = FUN_0077d680(uVar8);
    FUN_014c2870(uVar10,uVar8,param_1,uVar7,iVar2,uVar3,param_5);
  }
  uVar3 = FUN_0077d680(uVar8);
  (**(code **)(*param_1 + 0x110))(param_1,uVar8,0,uVar3);
joined_r0x014bf720:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


