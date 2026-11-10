/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a06510; name: FUN_00a06510
 */


void FUN_00a06510(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = FUN_00ffda40(param_1 + 0x100);
  if (lVar2 != 0) {
    pcVar4 = *(code **)(lVar2 + 0x158);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined8 *)(lVar2 + 0x158) = 0;
      (*pcVar4)(lVar2 + 0x170);
    }
    *(long *)(lVar2 + 0x170) = param_1;
    *(undefined4 *)(lVar2 + 0x178) = param_3;
    *(undefined8 *)(lVar2 + 0x150) = &LAB_00a06b40;
    *(undefined1 **)(lVar2 + 0x158) = &LAB_00a06b90;
    *(undefined1 **)(lVar2 + 0x160) = &LAB_00a06ba0;
    *(undefined1 **)(lVar2 + 0x168) = &LAB_00a06bb0;
    *(long *)(lVar2 + 0xf8) = *param_4;
    if (*param_4 == 0x2000000000000) {
      FUN_006cf0a0(&local_60,&DAT_0262c790);
      lVar1 = local_48;
      *(undefined8 *)(lVar2 + 0x120) = local_60;
      *(undefined8 *)(lVar2 + 0x128) = local_58;
      *(undefined8 *)(lVar2 + 0x130) = local_50;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      lVar3 = *(long *)(lVar2 + 0x138);
      *(long *)(lVar2 + 0x138) = lVar1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


