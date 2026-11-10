/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009db410; name: FUN_009db410
 */


void FUN_009db410(long param_1,long param_2)

{
  byte bVar1;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_body.pb.cc"
                 ,0x34f);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  bVar1 = **(byte **)(param_2 + 0x50);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_009db4dc:
      FUN_00860e40(param_1 + 0x50,*(undefined8 *)PTR_DAT_02716d10);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x50) + 8) != 0) goto LAB_009db4dc;
  bVar1 = **(byte **)(param_2 + 0x58);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_009db510:
      FUN_00860e40(param_1 + 0x58,*(undefined8 *)PTR_DAT_02716d10);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x58) + 8) != 0) goto LAB_009db510;
  bVar1 = **(byte **)(param_2 + 0x60);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_009db558;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x60) + 8) == 0) goto LAB_009db558;
  FUN_00860e40(param_1 + 0x60,*(undefined8 *)PTR_DAT_02716d10);
LAB_009db558:
  bVar1 = **(byte **)(param_2 + 0x68);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x68) + 8) == 0) {
    return;
  }
  FUN_00860e40(param_1 + 0x68,*(undefined8 *)PTR_DAT_02716d10);
  return;
}


