/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00714690; name: FUN_00714690
 */


void FUN_00714690(long param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  long local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  byte *local_70;
  long local_68;
  
  if (param_2 != (uint *)0x0) {
    FUN_007175b0(param_1 + 0x300,*param_2);
    uVar7 = (ulong)*param_2;
    uVar8 = *(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 5;
    if (uVar8 < uVar7) {
      FUN_0071a680((long *)(param_1 + 0x330),uVar7 - uVar8);
      uVar1 = *param_2;
    }
    else {
      if (uVar8 != uVar7) {
        lVar10 = *(long *)(param_1 + 0x330) + uVar7 * 0x20;
        lVar13 = *(long *)(param_1 + 0x338);
        while (lVar3 = lVar13, lVar10 != lVar3) {
          lVar13 = lVar3 + -0x20;
          if (*(long *)(lVar3 + -8) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
            *(undefined8 *)(lVar3 + -8) = 0;
          }
        }
        *(long *)(param_1 + 0x338) = lVar10;
      }
      uVar1 = *param_2;
    }
    if (uVar1 != 0) {
      uVar7 = 0;
      do {
        local_70 = (byte *)((long)(param_2 + uVar7 + 1) + (ulong)param_2[uVar7 + 1] + 4);
        lVar13 = *(long *)(param_1 + 0x300);
        FUN_007176e0(&local_a0,param_1 + 0x60,&local_70,".bntx");
        lVar10 = *(long *)(param_1 + 0x178);
        if (lVar10 == 0) {
          lVar10 = *(long *)(param_1 + 8);
        }
        uVar5 = FUN_006e1b00(param_1);
        FUN_0010ecd0(&local_68,*(undefined8 *)PTR_DAT_02710788,0,&local_a0,0,lVar10,uVar5);
        plVar11 = (long *)(lVar13 + uVar7 * 0x110 + 8);
        if (*plVar11 != 0) {
          (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
          *plVar11 = 0;
        }
        lVar10 = local_68;
        *plVar11 = local_68;
        if (local_68 != 0) {
          plVar11 = (long *)(local_68 + 0x48);
          (**(code **)(*plVar11 + 0x10))(plVar11);
          if ((*(long *)(lVar13 + uVar7 * 0x110 + 0x10) != 0) ||
             (*(long *)(lVar13 + uVar7 * 0x110 + 0x90) != 0)) {
            FUN_006e1e70(lVar10,lVar13 + uVar7 * 0x110,1);
          }
          FUN_006e1be0(lVar10);
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
        if ((local_88 != 0) && (local_a0 != 0)) {
          (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        }
        local_a0 = 0;
        uStack_98 = 0xcbf29ce484222645;
        local_90 = &DAT_01d38550;
        local_88 = 0;
        if (local_80 != 0) {
          (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
          local_80 = 0;
        }
        pbVar4 = local_70;
        sVar6 = strlen((char *)local_70);
        bVar2 = *pbVar4;
        uVar8 = 0xcbf29ce484222645;
        if (bVar2 != 0) {
          uVar8 = 0xcbf29ce484222645;
          pbVar9 = pbVar4;
          do {
            pbVar9 = pbVar9 + 1;
            uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar9;
          } while (bVar2 != 0);
        }
        puVar12 = (ulong *)(*(long *)(param_1 + 0x330) + uVar7 * 0x20);
        puVar12[2] = sVar6;
        *puVar12 = uVar8;
        puVar12[1] = (ulong)pbVar4;
        puVar12 = puVar12 + 3;
        if (*puVar12 != 0) {
          (**(code **)(*(long *)(*puVar12 + 0x48) + 0x18))();
          *puVar12 = 0;
        }
        *puVar12 = 0;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *param_2);
    }
  }
  return;
}


