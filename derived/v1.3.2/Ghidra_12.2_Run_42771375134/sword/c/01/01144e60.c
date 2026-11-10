/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01144e60; name: FUN_01144e60
 */


void FUN_01144e60(long param_1,char *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  if (*param_2 != '\0') {
    pcVar4 = (char *)FUN_01225e60(param_2 + 0x10);
    if (*pcVar4 != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x160);
      pcVar4 = pcVar4 + 4;
      uVar5 = FUN_0121d1b0(pcVar4);
      FUN_0077d520(uVar7,uVar5);
      uVar2 = FUN_0121d1c0(pcVar4);
      *(undefined1 *)(param_1 + 0x188) = uVar2;
      uVar2 = FUN_0121d1f0(pcVar4);
      *(undefined1 *)(param_1 + 0x189) = uVar2;
      uVar3 = FUN_0121d200(pcVar4);
      lVar6 = *(long *)(param_1 + 0x160);
      uVar3 = uVar3 & 0xff;
      *(ushort *)(param_1 + 0x168) = uVar3;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        uVar3 = *(ushort *)(param_1 + 0x168);
      }
      uVar2 = *(undefined1 *)(param_1 + 0x188);
      uVar1 = *(undefined1 *)(param_1 + 0x189);
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_48 = 0xffffffff;
      local_38 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      FUN_01143070(param_1 + 0x90,&local_38,uVar2,uVar1,uVar3,&local_60);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
    }
  }
  return;
}


