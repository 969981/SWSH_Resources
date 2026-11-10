/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc7000; name: FUN_00bc7000
 */


undefined8 FUN_00bc7000(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  local_38 = 0x65ba71b804099dfd;
  if ((*(long *)(param_1 + 0x2b0) == 0) ||
     (uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_38), (uVar2 & 1) != 0)) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    uVar3 = FUN_00bb48a0(param_1);
    uVar6 = 1;
    FUN_016b7990(uVar3,param_1 + 0x6c8,1,0);
    FUN_00bb4b40(param_1,1);
    uVar1 = FUN_0150b350(lVar4);
    *(undefined1 *)(param_1 + 0x690) = uVar1;
    FUN_00bb6fe0(param_1,0xb4fcbd101d4d307a,0xdc82951337bf2d1b);
    FUN_00bb94c0(param_1,param_1 + 0x6c8);
    *(undefined4 *)(param_1 + 0x68c) = 2;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


