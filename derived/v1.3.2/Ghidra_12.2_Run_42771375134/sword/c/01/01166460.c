/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01166460; name: FUN_01166460
 */


bool FUN_01166460(long param_1)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 auStack_48 [8];
  
  thunk_FUN_011f3570(auStack_48);
  puVar5 = PTR_DAT_02710860;
  local_60 = *(long **)(param_1 + 0x58);
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_50 = 0;
  uStack_58 = 0;
  puVar10 = *(undefined8 **)(param_1 + 0xf78);
  puVar11 = *(undefined8 **)(param_1 + 0xf80);
  do {
    while( true ) {
      if (puVar10 == puVar11) {
        ppuVar1 = (undefined8 **)(param_1 + 0xf78);
        puVar10 = local_78;
        puVar11 = local_70;
        if (ppuVar1 != &local_78) {
          plVar9 = *(long **)(param_1 + 0xf90);
          if (plVar9 != local_60) {
            lVar8 = *(long *)(param_1 + 0xf78);
            *(long *)(param_1 + 0xf80) = lVar8;
            (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,*(long *)(param_1 + 0xf88) - lVar8,8);
            *(undefined8 *)(param_1 + 0xf80) = 0;
            *(undefined8 *)(param_1 + 0xf88) = 0;
            *ppuVar1 = (undefined8 *)0x0;
            plVar9 = local_60;
          }
          *(long **)(param_1 + 0xf90) = plVar9;
          FUN_00b90920(ppuVar1,local_78,local_70);
          puVar10 = local_78;
          puVar11 = local_70;
        }
        if (puVar10 != (undefined8 *)0x0) {
          local_78 = puVar10;
          local_70 = puVar10;
          (**(code **)(*local_60 + 0x18))(local_60,puVar10,(long)local_68 - (long)puVar10,8);
        }
        return puVar10 != puVar11;
      }
      if (((puVar10[4] != 0) || (puVar10[5] != 0)) &&
         (uVar7 = FUN_011f4020(auStack_48), plVar9 = local_60, puVar6 = local_70, (uVar7 & 1) == 0))
      break;
LAB_0116655c:
      puVar10 = puVar10 + 0x10;
    }
    if (local_70 != local_68) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = puVar10[3];
      puVar6[2] = puVar10[2];
      puVar6[3] = uVar4;
      *puVar6 = uVar2;
      puVar6[1] = uVar3;
      uVar2 = puVar10[4];
      uVar3 = puVar10[5];
      uVar4 = puVar10[7];
      puVar6[6] = puVar10[6];
      puVar6[7] = uVar4;
      puVar6[4] = uVar2;
      puVar6[5] = uVar3;
      uVar2 = puVar10[8];
      uVar3 = puVar10[9];
      uVar4 = puVar10[0xb];
      puVar6[10] = puVar10[10];
      puVar6[0xb] = uVar4;
      puVar6[8] = uVar2;
      puVar6[9] = uVar3;
      uVar2 = puVar10[0xc];
      uVar3 = puVar10[0xd];
      uVar4 = puVar10[0xf];
      puVar6[0xe] = puVar10[0xe];
      puVar6[0xf] = uVar4;
      puVar6[0xc] = uVar2;
      puVar6[0xd] = uVar3;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      local_70 = local_70 + 0x10;
      goto LAB_0116655c;
    }
    FUN_011f4250(&local_78,puVar10);
    puVar10 = puVar10 + 0x10;
  } while( true );
}


