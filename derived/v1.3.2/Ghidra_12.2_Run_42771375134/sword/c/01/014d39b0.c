/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d39b0; name: FUN_014d39b0
 */


void FUN_014d39b0(long param_1,undefined2 param_2,undefined8 *param_3,byte param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort uVar8;
  ushort *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long local_68;
  long local_60;
  long local_58;
  
  uVar12 = (ulong)*(uint *)(param_1 + 0x1898);
  lVar10 = param_1 + uVar12 * 0x30;
  *(undefined2 *)(lVar10 + 0x5fe) = param_2;
  *(byte *)(lVar10 + 0x5fd) = param_4 & 1;
  bVar2 = FUN_009fe1a0(*param_3,2);
  *(byte *)(lVar10 + 0x5f1) = *(byte *)(lVar10 + 0x5f1) & 0xf0 | bVar2 & 0xf;
  cVar3 = FUN_009fe1a0(*param_3,3);
  *(byte *)(lVar10 + 0x5f1) = *(byte *)(lVar10 + 0x5f1) & 0xf | cVar3 << 4;
  uVar4 = FUN_009fe1a0(*param_3,5);
  *(undefined1 *)(lVar10 + 0x5f2) = uVar4;
  uVar4 = FUN_009ff100(*param_3);
  *(undefined1 *)(lVar10 + 0x5f3) = uVar4;
  uVar5 = FUN_009fe1a0(*param_3,6);
  *(undefined2 *)(lVar10 + 0x5f8) = uVar5;
  uVar4 = FUN_009ff0e0(*param_3);
  *(undefined1 *)(lVar10 + 0x5f0) = uVar4;
  pbVar1 = (byte *)(lVar10 + 0x5f0);
  bVar2 = FUN_009fed30(*param_3,1);
  *(byte *)(lVar10 + 0x5f5) = bVar2 & 1;
  bVar2 = FUN_009fed30(*param_3,2);
  *(byte *)(lVar10 + 0x5f6) = bVar2 & 1;
  uVar5 = FUN_009fe1a0(*param_3,7);
  *(undefined2 *)(lVar10 + 0x5fa) = uVar5;
  bVar2 = FUN_009ffa40(*param_3);
  *(byte *)(lVar10 + 0x5f4) = ~bVar2 & 1;
  uVar6 = FUN_009fe1a0(*param_3,10);
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < 10) {
    FUN_00ff86a0(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
    lVar10 = *(long *)(local_58 + 0x60);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar11 = param_1 + uVar12 * 0x30;
    FUN_0077eb10(lVar10,&DAT_02171f58 + (ulong)(uVar6 - 1) * 2,*(undefined8 *)(lVar11 + 0x5e0));
    uVar13 = (&DAT_02171f58)[(ulong)(uVar6 - 1) * 2];
    FUN_0077eb10(lVar10,&DAT_02171f60 + (ulong)(uVar6 - 1) * 0x10,*(undefined8 *)(lVar11 + 0x5e8));
    *(undefined8 *)(lVar11 + 0x5d8) = uVar13;
    *(undefined1 *)(lVar11 + 0x5fc) = 1;
    if (lVar10 == 0) {
      uVar8 = (ushort)*pbVar1 << 0xc;
      puVar9 = (ushort *)(param_1 + uVar12 * 0x30 + 0x600);
      goto LAB_014d3c64;
    }
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    uVar8 = (ushort)*pbVar1 << 0xc;
    puVar9 = (ushort *)(param_1 + uVar12 * 0x30 + 0x600);
    if (*(char *)(lVar11 + 0x5fc) != '\0') goto LAB_014d3c64;
  }
  else {
    uVar7 = FUN_008d3750();
    uVar13 = *param_3;
    local_60 = *(long *)(param_1 + uVar12 * 0x30 + 0x5e0);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    FUN_009fee40(uVar13,0,uVar7,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    uVar13 = *param_3;
    local_68 = *(long *)(param_1 + uVar12 * 0x30 + 0x5e8);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_009fee40(uVar13,1,uVar7,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    lVar10 = param_1 + uVar12 * 0x30;
    *(undefined1 *)(lVar10 + 0x5fc) = 0;
    uVar8 = (ushort)*pbVar1 << 0xc;
    puVar9 = (ushort *)(lVar10 + 0x600);
  }
  uVar8 = uVar8 | 0x100;
LAB_014d3c64:
  *puVar9 = uVar8 | (ushort)uVar6;
  *(int *)(param_1 + 0x1898) = *(int *)(param_1 + 0x1898) + 1;
  return;
}


