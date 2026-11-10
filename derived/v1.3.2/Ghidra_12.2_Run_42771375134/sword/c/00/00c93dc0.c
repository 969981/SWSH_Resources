/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c93dc0; name: FUN_00c93dc0
 */


void FUN_00c93dc0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = 0;
  lVar6 = 0;
  lVar7 = 0x3d0;
  do {
    lVar2 = param_1 + lVar5;
    uVar1 = (int)lVar6 + 1;
    uVar4 = FUN_00c834c0(*(undefined8 *)(param_1 + 0x270),*(undefined1 *)(lVar2 + 0x2ef));
    local_80 = *(undefined4 *)(lVar2 + 0x2e8);
    local_7c = *(undefined1 *)(lVar2 + 0x2f0);
    local_78 = *(undefined8 *)(param_1 + lVar6 * 8 + 0x1e8);
    local_70 = 0;
    puVar3 = (undefined8 *)(param_1 + 200);
    if (((0xf < (uVar1 & 0x7fffffff)) || ((1 << (ulong)(uVar1 & 0x1f) & 0x9082U) == 0)) &&
       (2 < (int)lVar6 - 2U)) {
      puVar3 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x1f);
    }
    local_70 = *puVar3;
    FUN_00c825a0(&local_68,uVar4);
    if ((*(uint *)(param_1 + lVar6 * 4 + 0x5b4) | 2) == 3) {
      FUN_00c95b50(param_1,param_1 + lVar7,uVar4,&local_80);
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + 0xc;
    lVar7 = lVar7 + 0x20;
  } while (lVar6 != 0xf);
  return;
}


