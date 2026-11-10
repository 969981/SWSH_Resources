/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccea80; name: FUN_00ccea80
 */


void FUN_00ccea80(long param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_78;
  long local_70;
  long local_68;
  
  lVar12 = *(long *)(param_1 + 0x538);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar13 = 0;
  lVar14 = 0;
  iVar10 = 0;
  puVar9 = (undefined8 *)(param_1 + 0x678);
  do {
    lVar6 = (**(code **)(*param_2 + 0x50))(param_2,iVar10);
    lVar7 = *(long *)(param_1 + 0x638);
    local_70 = (**(code **)(*param_2 + 0x50))(param_2,iVar10);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_00cd0360(lVar7 + lVar13,&local_70,0);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    uVar4 = FUN_0087eca0(lVar6);
    uVar5 = FUN_0087ed40(lVar6);
    FUN_00ccf310(param_1,uVar4,uVar5,iVar10);
    if (lVar6 == 0) {
      cVar2 = FUN_0087b890(0);
      if (cVar2 != '\0') {
        local_78 = lVar6;
        FUN_016ab860(puVar9[-3],&local_78,0,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        FUN_0087b880(0,0);
        uVar4 = FUN_00880ae0();
        lVar7 = *(long *)(PTR_DAT_0271c818 + lVar14 + 0x18);
        uVar11 = 0;
        if ((lVar7 != -0x340d631b7bddd9bb) && (lVar7 != 0)) {
          local_68 = lVar7;
          uVar11 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_68);
        }
        FUN_016a7910(lVar12,uVar4,0,uVar11,0,0);
      }
      puVar1 = PTR_DAT_0271c818 + lVar14;
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1);
      cVar2 = FUN_0087b890(0);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | cVar2 != '\0';
      bVar3 = FUN_0087b890(0);
      if (1 < bVar3) {
        local_78 = lVar6;
        FUN_016ab860(puVar9[-2],&local_78,1,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        FUN_0087b880(0,1);
        uVar4 = FUN_00880ae0();
        lVar7 = *(long *)(puVar1 + 0x58);
        uVar11 = 0;
        if ((lVar7 != -0x340d631b7bddd9bb) && (lVar7 != 0)) {
          local_68 = lVar7;
          uVar11 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_68);
        }
        FUN_016a7910(lVar12,uVar4,0,uVar11,0,0);
      }
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x40);
      bVar3 = FUN_0087b890(0);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 1 < bVar3;
      bVar3 = FUN_0087b890(0);
      if (2 < bVar3) {
        local_78 = lVar6;
        FUN_016ab860(puVar9[-1],&local_78,2,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        FUN_0087b880(0,2);
        uVar4 = FUN_00880ae0();
        lVar7 = *(long *)(puVar1 + 0x98);
        uVar11 = 0;
        if ((lVar7 != -0x340d631b7bddd9bb) && (lVar7 != 0)) {
          local_68 = lVar7;
          uVar11 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_68);
        }
        FUN_016a7910(lVar12,uVar4,0,uVar11,0,0);
      }
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x80);
      bVar3 = FUN_0087b890(0);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 2 < bVar3;
      bVar3 = FUN_0087b890(0);
      if (3 < bVar3) {
        local_78 = lVar6;
        FUN_016ab860(*puVar9,&local_78,3,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        FUN_0087b880(0,3);
        uVar4 = FUN_00880ae0();
        lVar6 = *(long *)(puVar1 + 0xd8);
        uVar11 = 0;
        if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
          local_68 = lVar6;
          uVar11 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_68);
        }
        FUN_016a7910(lVar12,uVar4,0,uVar11,0,0);
      }
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0xc0);
      bVar3 = FUN_0087b890(0);
    }
    else {
      lVar7 = lVar6 + 0x48;
      cVar2 = FUN_0087b890(lVar6);
      if (cVar2 != '\0') {
        uVar11 = puVar9[-3];
        local_78 = lVar6;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(lVar7);
        FUN_016ab860(uVar11,&local_78,0,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        FUN_0087b880(lVar6,0);
        uVar4 = FUN_00880ae0();
        lVar8 = *(long *)(PTR_DAT_0271c818 + lVar14 + 0x18);
        uVar11 = 0;
        if ((lVar8 != -0x340d631b7bddd9bb) && (lVar8 != 0)) {
          local_68 = lVar8;
          uVar11 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_68);
        }
        FUN_016a7910(lVar12,uVar4,0,uVar11,0,0);
      }
      puVar1 = PTR_DAT_0271c818 + lVar14;
      lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1);
      cVar2 = FUN_0087b890(lVar6);
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | cVar2 != '\0';
      bVar3 = FUN_0087b890(lVar6);
      if (1 < bVar3) {
        uVar11 = puVar9[-2];
        local_78 = lVar6;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(lVar7);
        FUN_016ab860(uVar11,&local_78,1,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        FUN_0087b880(lVar6,1);
        uVar4 = FUN_00880ae0();
        lVar8 = *(long *)(puVar1 + 0x58);
        uVar11 = 0;
        if ((lVar8 != -0x340d631b7bddd9bb) && (lVar8 != 0)) {
          local_68 = lVar8;
          uVar11 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_68);
        }
        FUN_016a7910(lVar12,uVar4,0,uVar11,0,0);
      }
      lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x40);
      bVar3 = FUN_0087b890(lVar6);
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | 1 < bVar3;
      bVar3 = FUN_0087b890(lVar6);
      if (2 < bVar3) {
        uVar11 = puVar9[-1];
        local_78 = lVar6;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(lVar7);
        FUN_016ab860(uVar11,&local_78,2,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        FUN_0087b880(lVar6,2);
        uVar4 = FUN_00880ae0();
        lVar8 = *(long *)(puVar1 + 0x98);
        uVar11 = 0;
        if ((lVar8 != -0x340d631b7bddd9bb) && (lVar8 != 0)) {
          local_68 = lVar8;
          uVar11 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_68);
        }
        FUN_016a7910(lVar12,uVar4,0,uVar11,0,0);
      }
      lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x80);
      bVar3 = FUN_0087b890(lVar6);
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | 2 < bVar3;
      bVar3 = FUN_0087b890(lVar6);
      if (3 < bVar3) {
        uVar11 = *puVar9;
        local_78 = lVar6;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(lVar7);
        FUN_016ab860(uVar11,&local_78,3,0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        FUN_0087b880(lVar6,3);
        uVar4 = FUN_00880ae0();
        lVar7 = *(long *)(puVar1 + 0xd8);
        uVar11 = 0;
        if ((lVar7 != -0x340d631b7bddd9bb) && (lVar7 != 0)) {
          local_68 = lVar7;
          uVar11 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_68);
        }
        FUN_016a7910(lVar12,uVar4,0,uVar11,0,0);
      }
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0xc0);
      bVar3 = FUN_0087b890(lVar6);
    }
    lVar14 = lVar14 + 0x100;
    lVar13 = lVar13 + 0x220;
    iVar10 = iVar10 + 1;
    puVar9 = puVar9 + 4;
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 3 < bVar3;
  } while (lVar14 != 0x300);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


