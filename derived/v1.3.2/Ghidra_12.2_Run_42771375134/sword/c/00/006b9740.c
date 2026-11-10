/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b9740; name: FUN_006b9740
 */


void FUN_006b9740(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,int *param_5,
                 undefined8 param_6)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  long local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  long *local_78;
  size_t local_70;
  long local_68;
  
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[2] = param_3;
  param_1[3] = param_4;
  plVar11 = param_1 + 4;
  *plVar11 = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_5 == (int *)0x0) {
    FUN_006b9a40(&local_80,param_2);
    puVar9 = local_80;
    local_80 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)param_1[8];
    param_1[8] = puVar9;
    puVar9 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],puVar7,param_1[10],param_1[0xb]);
      puVar9 = local_80;
    }
    param_1[9] = local_78;
    param_1[10] = local_70;
    param_1[0xb] = local_68;
    local_80 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9);
      (**(code **)(*local_78 + 0x18))(local_78,puVar9,local_70,local_68);
    }
  }
  else {
    if ((*(ushort *)((long)param_5 - (long)*param_5) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)param_5 - (long)*param_5))[3], uVar5 == 0)) {
      lVar8 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_5 + uVar5);
      lVar8 = (long)puVar1 + (ulong)*puVar1;
    }
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x28,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_006be770(lVar3,lVar8);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    lVar8 = *plVar11;
    *plVar11 = lVar3;
    if (lVar8 != 0) {
      if (*(long *)(lVar8 + 0x20) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar8 + 0x20) + 0x48) + 0x18))();
        *(undefined8 *)(lVar8 + 0x20) = 0;
      }
      (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar8,param_1[6],param_1[7]);
    }
    piVar10 = (int *)*param_1;
    param_1[5] = param_2;
    param_1[6] = 0x28;
    param_1[7] = 8;
    if ((10 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[5], uVar5 != 0)) {
      uVar12 = (ulong)*(uint *)((long)piVar10 + uVar5);
      lVar8 = (long)((long)piVar10 + uVar5) + uVar12;
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)0xcbf29ce484222645;
        local_70 = strlen((char *)(lVar8 + 4));
        bVar2 = *(byte *)(lVar8 + 4);
        if (bVar2 != 0) {
          pbVar6 = (byte *)((long)piVar10 + uVar12 + uVar5 + 5);
          do {
            puVar9 = (undefined8 *)(((ulong)puVar9 ^ (ulong)bVar2) * 0x100000001b3);
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (bVar2 != 0);
        }
        local_68 = 0;
        local_80 = puVar9;
        local_78 = (long *)(lVar8 + 4);
        (**(code **)(*param_3 + 0x30))(&local_98,param_3,&local_80);
        lVar8 = local_98;
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
        }
        lVar3 = param_1[0xd];
        param_1[0xd] = lVar8;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        }
        *(undefined4 *)(param_1 + 0xf) = local_88;
        param_1[0xe] = uStack_90;
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
          local_98 = 0;
        }
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        }
      }
    }
  }
  return;
}


