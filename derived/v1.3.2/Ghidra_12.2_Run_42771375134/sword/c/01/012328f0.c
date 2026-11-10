/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012328f0; name: FUN_012328f0
 */


void FUN_012328f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_027261e8 + 0x10;
  puVar2 = PTR_DAT_027261e8 + 0xb0;
  param_1[9] = (long)(PTR_DAT_027261e8 + 0x70);
  param_1[10] = (long)puVar2;
  *param_1 = (long)puVar1;
  if ((((char)param_1[0x6d] != '\0') && (param_1[0x1f] != 0)) &&
     (*(long **)param_1[0x1e] != (long *)0x0)) {
    (**(code **)(**(long **)param_1[0x1e] + 0x40))();
  }
  if (*(char *)((long)param_1 + 0x35c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x35c) = 0;
  }
  if ((char)param_1[0x69] != '\0') {
    *(undefined1 *)(param_1 + 0x69) = 0;
  }
  if ((char)param_1[0x65] != '\0') {
    *(undefined1 *)(param_1 + 0x65) = 0;
  }
  pcVar3 = (code *)param_1[0x55];
  if (pcVar3 != (code *)0x0) {
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    (*pcVar3)(param_1 + 0x58);
  }
  pcVar3 = (code *)param_1[0x45];
  if (pcVar3 != (code *)0x0) {
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    (*pcVar3)(param_1 + 0x48);
  }
  pcVar3 = (code *)param_1[0x35];
  if (pcVar3 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar3)(param_1 + 0x38);
  }
  pcVar3 = (code *)param_1[0x25];
  if (pcVar3 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar3)(param_1 + 0x28);
  }
  FUN_007dce90(param_1);
  return;
}


