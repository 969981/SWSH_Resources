/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a55a30; name: FUN_00a55a30
 */


void FUN_00a55a30(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_00ffdd70(uVar4,&DAT_02154ff0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_00ffdd70(uVar4,&DAT_02154ff8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00ffdef0(uVar4,&DAT_02155000);
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  pcVar2 = *(code **)(lVar3 + 0xb8);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0;
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
    (*pcVar2)(lVar3 + 0xd0);
  }
  *(long *)(lVar3 + 0xd0) = param_1;
  *(undefined8 *)(lVar3 + 0xb0) = &LAB_00a55fd0;
  *(undefined1 **)(lVar3 + 0xb8) = &LAB_00a55fe0;
  *(undefined1 **)(lVar3 + 0xc0) = &LAB_00a55ff0;
  *(undefined1 **)(lVar3 + 200) = &LAB_00a56000;
  FUN_00a56010(*(undefined8 *)(param_1 + 0x18),0);
  FUN_00a56140(*(undefined8 *)(param_1 + 0x20),0);
  return;
}


