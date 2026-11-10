/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00799db0; name: FUN_00799db0
 */


void FUN_00799db0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_240 [496];
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x270);
  *(long *)(param_1 + 0x270) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *param_3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x278);
  *(long *)(param_1 + 0x278) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x268);
  local_50 = 0x487dbfc5120c4de2;
  pcStack_48 = "u_FalloffLut";
  local_40 = 0xc;
  local_38 = 0;
  FUN_00784060(auStack_240,*param_3);
  FUN_00739510(uVar2,3,&local_50,auStack_240,4);
  FUN_00784490(auStack_240);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


