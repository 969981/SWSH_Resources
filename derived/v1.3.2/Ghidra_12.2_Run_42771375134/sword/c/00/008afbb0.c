/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008afbb0; name: FUN_008afbb0
 */


void FUN_008afbb0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_68 [4];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_68[2] = DAT_02144c20;
  local_68[3] = DAT_02144c28;
  local_68[0] = DAT_02144c10;
  local_68[1] = DAT_02144c18;
  local_38 = DAT_02144c40;
  local_48 = DAT_02144c30;
  uStack_40 = DAT_02144c38;
  uVar2 = FUN_008b0140();
  if ((uVar2 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    iVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa0));
    if (iVar1 == 0) {
      lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      uVar2 = FUN_01538f70(lVar5);
      uVar6 = 0xbee3656d08fec6c2;
      if ((uVar2 & 1) == 0) {
        uVar6 = 0xbee3666d08fec875;
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
    }
    else {
      uVar6 = 0xf2276952e9a8d12c;
    }
    lVar5 = 1;
    *(undefined4 *)(param_1 + 0x80) = 0;
    local_68[0] = uVar6;
  }
  uVar2 = FUN_008b02a0(param_1);
  if ((uVar2 & 1) == 0) {
    local_68[lVar5] = 0x37fc8089d7827a28;
    *(undefined4 *)(param_1 + lVar5 * 4 + 0x80) = 7;
    if ((int)lVar5 == 0) goto LAB_008afd28;
    uVar4 = 1;
  }
  else {
    local_68[lVar5] = 0x697e5a4306d456b3;
    *(undefined4 *)(param_1 + 0x80 + lVar5 * 4) = 1;
    uVar4 = (int)lVar5 + 1;
    local_68[uVar4] = 0x37fc8089d7827a28;
    *(undefined4 *)(param_1 + 0x80 + (ulong)uVar4 * 4) = 7;
  }
  puVar3 = (undefined8 *)(param_1 + 0xa0);
  FUN_008c86c0(*puVar3,local_68,0);
  FUN_008c8930(*puVar3,uVar4 + 1);
  FUN_008c8a30(*puVar3,uVar4);
LAB_008afd28:
  FUN_008c4b10(*(undefined8 *)(param_1 + 0xa0),0);
  return;
}


