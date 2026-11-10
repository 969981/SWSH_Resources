/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01017a10; name: FUN_01017a10
 */


void FUN_01017a10(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  
  *(undefined **)(param_2 + 0x40) = PTR_DAT_027164e0 + 0x10;
  if (*(long *)(param_2 + 0x48) == 0) {
    *(undefined8 *)(param_2 + 0x48) = 0;
    pcVar2 = *(code **)(param_2 + 0xd8);
  }
  else {
    FUN_006e2100();
    lVar1 = *(long *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_2 + 0xd8);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_2 + 0xe0) = 0;
    *(undefined8 *)(param_2 + 0xe8) = 0;
    *(undefined8 *)(param_2 + 0xd0) = 0;
    *(undefined8 *)(param_2 + 0xd8) = 0;
    (*pcVar2)(param_2 + 0xf0);
  }
  pcVar2 = *(code **)(param_2 + 0x58);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    (*pcVar2)(param_2 + 0x70);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x48) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  if ((*(long *)(param_2 + 0x28) != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xcbf29ce484222645;
  *(undefined1 **)(param_2 + 0x20) = &DAT_01d38550;
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x30) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  return;
}


