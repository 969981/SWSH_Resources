/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cda90; name: FUN_006cda90
 */


void FUN_006cda90(long param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  FUN_006ce0a0(param_1 + 0x210,*param_2);
  puVar4 = PTR_DAT_02710860;
  if (*param_2 != 0) {
    uVar17 = NEON_fmov(0x3f800000,4);
    uVar14 = 0;
    puVar15 = param_2 + 6;
    do {
      plVar11 = *(long **)(param_1 + 0x178);
      if (plVar11 == (long *)0x0) {
        plVar11 = *(long **)(param_1 + 8);
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x30,0x10);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_006cdd00:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      local_70 = 0x30;
      local_68 = 0x10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar12 = *(undefined8 **)(param_1 + 0x218);
      local_80 = puVar6;
      local_78 = plVar11;
      if (puVar12 < *(undefined8 **)(param_1 + 0x220)) {
        uVar13 = *(undefined8 *)(param_1 + 0x228);
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_006cdd00;
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar13;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *puVar12 = local_80;
        puVar12[1] = local_78;
        puVar12[2] = local_70;
        puVar12[3] = local_68;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x218) + 0x20;
        local_80 = (undefined8 *)0x0;
      }
      else {
        FUN_012c6050(param_1 + 0x210,&local_80);
        puVar6 = local_80;
        local_80 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          local_80 = (undefined8 *)0x0;
          (**(code **)(*local_78 + 0x18))(local_78,puVar6,local_70,local_68);
        }
      }
      uVar8 = (ulong)puVar15[-5];
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x218) + -0x20);
      lVar7 = uVar8 - (long)*(int *)((long)puVar15 + (uVar8 - 0x14));
      if (*(ushort *)((long)puVar15 + lVar7 + -0x14) < 5) {
        uVar10 = 0;
      }
      else {
        uVar9 = (ulong)*(ushort *)((long)puVar15 + lVar7 + -0x10);
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = (ulong)*(uint *)((long)puVar15 + uVar8 + uVar9 + -0x14);
        }
      }
      puVar6[4] = *(undefined8 *)
                   (*(long *)(param_1 + 0x1e0) +
                   (-(uVar10 >> 0x1f) & 0xffffffe000000000 | uVar10 << 5));
      uVar3 = *(ushort *)
               ((long)puVar15 + (uVar8 - (long)*(int *)((long)puVar15 + (uVar8 - 0x14))) + -0xe);
      puVar1 = (undefined4 *)((long)puVar15 + uVar8 + uVar3);
      puVar15 = puVar15 + 1;
      uVar16 = puVar1[-5];
      bVar5 = uVar3 != 0;
      puVar2 = (undefined4 *)&DAT_00000004;
      if (bVar5) {
        puVar2 = puVar1 + -4;
      }
      uVar20 = (undefined4)((ulong)uVar17 >> 0x20);
      uVar22 = *puVar1;
      uVar14 = uVar14 + 1;
      uVar18 = *puVar2;
      puVar2 = (undefined4 *)&DAT_0000000c;
      if (bVar5) {
        puVar2 = puVar1 + -2;
      }
      uVar19 = *puVar2;
      puVar2 = (undefined4 *)&DAT_00000010;
      if (bVar5) {
        puVar2 = puVar1 + -1;
      }
      uVar21 = *puVar2;
      puVar6[1] = CONCAT44(uVar20,puVar1[-3]);
      *puVar6 = CONCAT44(uVar18,uVar16);
      puVar6[3] = CONCAT44(uVar20,uVar22);
      puVar6[2] = CONCAT44(uVar21,uVar19);
    } while (uVar14 < *param_2);
  }
  return;
}


